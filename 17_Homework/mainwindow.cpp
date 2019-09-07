#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "myslider.h"
#include "mylineedit.h"
#include "mycombobox.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->setMaximum(100);
    ui->horizontalSlider->setValue(0);
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);
    ui->lineEdit->setText("0");

    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), ui->horizontalSlider, SLOT(mySliderChanged()));
    connect(ui->horizontalSlider, SIGNAL(iChanged(QObject*)), this, SLOT(actByYourChange(QObject*)));

    connect(ui->lineEdit, SIGNAL(editingFinished()), ui->lineEdit, SLOT(myTextChanged()));
    connect(ui->lineEdit, SIGNAL(iChanged(QObject*)), this, SLOT(actByYourChange(QObject*)));

    connect(ui->comboBox, SIGNAL(currentTextChanged(QString)), ui->comboBox, SLOT(myComboBoxChanged()));
    connect(ui->comboBox, SIGNAL(iChanged(QObject*)), this, SLOT(actByYourChange(QObject*)));

    connect(ui->pushButton, SIGNAL(clicked()), ui->pushButton, SLOT(setReset()));
    connect(ui->pushButton, SIGNAL(iChanged(QObject*)), this, SLOT(actByYourChange(QObject*)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::actByYourChange(QObject* sender)
{
    if(sender == ui->horizontalSlider){
        ui->progressBar->setValue(ui->horizontalSlider->value());

        QString val = QString::number(ui->horizontalSlider->value());
        ui->lineEdit->setText(val);
    }
    else if(sender == ui->lineEdit){
        int val = ui->lineEdit->text().toInt();
        ui->progressBar->setValue(val);

        ui->horizontalSlider->setValue(val);

        if(val == 0){
            ui->comboBox->setCurrentText(ui->lineEdit->text());
        }
        else if(val == 50){
            ui->comboBox->setCurrentText(ui->lineEdit->text());
        }
        else if(val == 100){
            ui->comboBox->setCurrentText(ui->lineEdit->text());
        }
    }
    else if(sender == ui->comboBox){
        int val = ui->comboBox->currentText().toInt();
        ui->progressBar->setValue(val);
        ui->horizontalSlider->setValue(val);
        ui->lineEdit->setText(ui->comboBox->currentText());
    }
    else if(sender == ui->pushButton){
        ui->progressBar->setValue(0);
        ui->horizontalSlider->setValue(0);
        ui->lineEdit->setText("0");
        ui->comboBox->setCurrentText("0");
    }
    ui->centralWidget->adjustSize();
}
