#include <iostream>
#include <QFile>
#include <QStringList>
#include <QDir>
#include <QCoreApplication>
#include <QDebug>
#include <QString>
#include "bundleparser.h"

/**
 * @brief BundleParser::parse
 * Iterate through csv file and build table rows
 * @param filename QString name of csv file
 */
void BundleParser::parse(QString filename) {

    QFile file("/Users/Ryan/Desktop/MSU Classes/CSE 335/Project2/" + filename);
    if (!file.exists()) {
        qDebug() << file.errorString();
        qDebug() << QDir::currentPath();
        throw file.error();
    }
    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << file.errorString();
        qDebug() << QDir::currentPath();
        throw file.error();
    }

    QStringList qsl;
    while (!file.atEnd()) {
        QStringList bundleItems;
        QString line = file.readLine();
        qsl = line.split(',');
        m_builder->addRow();
        m_builder->addName(qsl[0]);
        m_builder->addPrice(qsl[1]);
        for (int i = 2; i < qsl.length(); ++i) {
            bundleItems.append(qsl[i].trimmed());
        }
        m_builder->addBundleItems(bundleItems);
        m_builder->endRow();
    }

    file.close();



//    bundle.close();

//    ui->bundleTable->setRowCount(bundleNameList.size());
//    ui->bundleTable->setColumnCount(3);

//    for(int i=0; i<bundleNameList.size(); i++){
//        ui->bundleTable->setItem(i, 0, new QTableWidgetItem(bundleNameList[i]));
//        ui->bundleTable->setItem(i, 1, new QTableWidgetItem(bundlePriceList[i]));
//        ui->bundleTable->setItem(i, 2, new QTableWidgetItem(bundleDiscountList[i]));
//    }

}
