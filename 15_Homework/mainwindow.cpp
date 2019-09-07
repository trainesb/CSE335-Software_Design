#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "targetlabel.h"
#include <QtGui>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSlider->setMinimum(0);
    ui->horizontalSlider->setMaximum(40);
    ui->ChngLabel->TargetLabel::setFontSize(10);



    //---Font Family Size Type---
    connect(ui->lineEdit, SIGNAL(textChanged(QString)), ui->ChngLabel, SLOT(setSizeByFamily(QString)));
    connect(ui->comboBox, SIGNAL(currentTextChanged(QString)), ui->ChngLabel, SLOT(setSizeByFamilyText(QString)));

    //---Font Family Checkboxs---
    connect(ui->ArialChk, SIGNAL(clicked()), ui->ChngLabel, SLOT(setArial()));
    connect(ui->TimesNewRomanChk, SIGNAL(clicked()), ui->ChngLabel, SLOT(setTimesNewRoman()));
    connect(ui->ComicSansMSChk, SIGNAL(clicked()), ui->ChngLabel, SLOT(setComicSansMS()));

    //---Font Size Slider---
    connect(ui->horizontalSlider, SIGNAL(sliderMoved(int)), ui->ChngLabel, SLOT(setFontSize(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    if (arg1 == "small"){
        ui->horizontalSlider->setValue(10);
    } else if (arg1 == "medium"){
        ui->horizontalSlider->setValue(20);
    } else if (arg1 == "big"){
        ui->horizontalSlider->setValue(40);
    }
}
