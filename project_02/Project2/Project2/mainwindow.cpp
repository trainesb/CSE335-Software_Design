#include <iostream>
#include <QDebug>
#include <QFile>
#include <QDir>
#include <QTabWidget>
#include <QString>
#include <math.h>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mypushbutton.h"
#include "builder.h"
#include "tablebuilder.h"
#include "parser.h"
#include "shoppingcart.h"
#include "tableparser.h"
#include "bundleparser.h"
#include "bundlebuilder.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {

    ui->setupUi(this);
    shoppingCart = new ShoppingCart(this);

    ui->productTable->horizontalHeader()->setStretchLastSection(true);
    ui->productTable->setSortingEnabled(true);
    ui->bundleTable->horizontalHeader()->setStretchLastSection(true);


    connect(ui->loadDatabaseButton, SIGNAL(clicked()), ui->loadDatabaseButton, SLOT(iClicked()));
    connect(ui->loadDatabaseButton, SIGNAL(iChanged(QObject*)), this, SLOT(actByYourChange(QObject*)));

    connect(ui->productTable, SIGNAL(clicked(const QModelIndex &)), this, SLOT(onProductTableClicked(const QModelIndex &)));
    connect(ui->bundleTable, SIGNAL(clicked(const QModelIndex &)), this, SLOT(onBundleTableClicked(const QModelIndex &)));

    connect(ui->addToCartButton, SIGNAL(clicked()), ui->addToCartButton, SLOT(iClicked()));
    connect(ui->addToCartButton, SIGNAL(iChanged(QObject*)), this, SLOT(actByYourChange(QObject*)));

    connect(ui->showCartButton, SIGNAL(clicked()), ui->showCartButton, SLOT(iClicked()));
    connect(ui->showCartButton, SIGNAL(iChanged(QObject*)), this, SLOT(actByYourChange(QObject*)));


}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onProductTableClicked(const QModelIndex &index){
    if(index.isValid()){
        QString cellText = index.data().toString();
        ui->productTable->selectRow(index.row());
    }
}

void MainWindow::onBundleTableClicked(const QModelIndex &index){
    if(index.isValid()){
        QString cellText = index.data().toString();
        ui->bundleTable->selectRow(index.row());
    }
}

/**
 * @brief MainWindow::actByYourChange
 * Use mediator pattern to take action based on source of signal
 * @param q QObject*
 */
void MainWindow::actByYourChange(QObject* q) {

    if (q == ui->loadDatabaseButton) {

        //load Technology.csv
//        QString backPath = "../project2/";
//        QFile tech(backPath + "Technology.csv");
//        QFile tech("/Users/Ryan/Desktop/MSU Classes/CSE 335/Project2/Technology.csv");

        TableBuilder tableBuilder;
        TableParser tableParser;

        tableParser.setBuilder(&tableBuilder);

        tableParser.parse("Technology.csv");

        QList<QMap<QString, QString>> productTable = tableBuilder.getTable();

        for (int i = 0; i < productTable.length(); i++) {
            ui->productTable->insertRow( ui->productTable->rowCount() );
            ui->productTable->setItem(i, 0, new QTableWidgetItem(productTable[i]["productName"]));
            ui->productTable->setItem(i, 1, new QTableWidgetItem(productTable[i]["type"]));
            ui->productTable->setItem(i, 2, new QTableWidgetItem(productTable[i]["price"]));
            ui->productTable->setItem(i, 3, new QTableWidgetItem(productTable[i]["specialAttribute"]));
        }

        //load Bundles.csv
//        QFile bundle(backPath + "Bundles.csv");
        //QFile bundle("/Users/Ryan/Desktop/MSU Classes/CSE 335/Project2/Bundles.csv");

        BundleBuilder bundleBuilder;
        BundleParser bundleParser;

        bundleParser.setBuilder(&bundleBuilder);

        bundleParser.parse("Bundles.csv");

        QList<QMap<QString, QString>> bundleTable = bundleBuilder.getTable();
        QList<QStringList> bundleItems = bundleBuilder.getBundleItems();

        for (int i = 0; i < bundleTable.length(); i++) {
            ui->bundleTable->insertRow( ui->bundleTable->rowCount() );
            ui->bundleTable->setItem(i, 0, new QTableWidgetItem(bundleTable[i]["productName"]));
            ui->bundleTable->setItem(i, 1, new QTableWidgetItem(bundleTable[i]["price"]));
            ui->bundleTable->setItem(i, 2, new QTableWidgetItem(getSavings(bundleItems[i], bundleTable[i]["price"])));
        }

        ui->loadDatabaseButton->setEnabled(false);
        ui->addToCartButton->setEnabled(true);
        ui->showCartButton->setEnabled(true);
    }

    else if (q == ui->addToCartButton) {

        QModelIndexList selectedList = ui->productTable->selectionModel()->selectedRows();
        qDebug() << selectedList;

        for(int i=0; i<selectedList.length(); ++i) {
            QString name = ui->productTable->selectionModel()->selectedRows(0).value(i).data().toString();
            QString price = ui->productTable->selectionModel()->selectedRows(2).value(i).data().toString();
            shoppingCart->addItem(name, price);
        }

        QModelIndexList selecteList = ui->bundleTable->selectionModel()->selectedRows();
        for(int i=0; i<selecteList.length(); ++i){
            QString name = ui->bundleTable->selectionModel()->selectedRows(0).value(i).data().toString();
            QString price = ui->bundleTable->selectionModel()->selectedRows(1).value(i).data().toString();
            shoppingCart->addItem(name, price);
        }

        shoppingCart->show();
        ui->productTable->clearSelection();
        ui->bundleTable->clearSelection();
        ui->showCartButton->setText("Hide Cart");
    }
    else if (q == ui->showCartButton) {
        if(ui->showCartButton->text() == "Hide Cart") {
            shoppingCart->hide();
            ui->showCartButton->setText("Show Cart");
        }
        else {
            shoppingCart->show();
            ui->showCartButton->setText("Hide Cart");
        }
    }

}


QString MainWindow::getSavings(QStringList& bundle, QString price) {

    float bundlePrice = 0;
    int numRows = ui->productTable->rowCount();

    for (int i = 0; i < bundle.length(); ++i) {
        for (int j = 0; j < numRows; ++j) {
            if (ui->productTable->item(j, 0)->text() == bundle[i]) {
                bundlePrice += ui->productTable->item(j, 2)->text().toFloat();
                //continue;
            }
        }
    }

    float savings = 100 - ((price.toFloat() / bundlePrice) * 100);
    return QString::number(round(static_cast<double>(savings)))+"%";
}
