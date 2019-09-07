#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtGui>
#include <QMessageBox>
#include "fontfamily.h"
#include "fontsizecombo.h"
#include "targetlineedit.h"
#include "sizeslider.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSizeSlider->setMinimum(0);
    ui->horizontalSizeSlider->setMaximum(40);
    ui->horizontalSizeSlider->setValue(10);
    QFont font = ui->TargetLabel->font();
    font.setPointSize(10);
    ui->TargetLabel->setFont(font);

    connect(ui->FontSize_lineEdit, SIGNAL(editingFinished()), ui->FontSize_lineEdit, SLOT(myEditingFinished()));
    connect(ui->FontSize_lineEdit, SIGNAL(iChanged(QObject*)), this, SLOT(actByChange(QObject*)));

    connect(ui->FontSize_comboBox, SIGNAL(currentTextChanged(QString)), ui->FontSize_comboBox, SLOT(CurrentSizeChanged(QString)));
    connect(ui->FontSize_comboBox, SIGNAL(iChanged(QObject*)), this, SLOT(actByChange(QObject*)));

    connect(ui->Arial_Chk, SIGNAL(clicked(bool)), ui->Arial_Chk, SLOT(FontFamilyChanged()));
    connect(ui->Arial_Chk, SIGNAL(iChanged(QObject*)), this, SLOT(actByChange(QObject*)));

    connect(ui->TimesNewRoman_Chk, SIGNAL(clicked(bool)), ui->TimesNewRoman_Chk, SLOT(FontFamilyChanged()));
    connect(ui->TimesNewRoman_Chk, SIGNAL(iChanged(QObject*)), this, SLOT(actByChange(QObject*)));

    connect(ui->ComicSansMS_Chk, SIGNAL(clicked(bool)), ui->ComicSansMS_Chk, SLOT(FontFamilyChanged()));
    connect(ui->ComicSansMS_Chk, SIGNAL(iChanged(QObject*)), this, SLOT(actByChange(QObject*)));

    connect(ui->horizontalSizeSlider, SIGNAL(valueChanged(int)), ui->horizontalSizeSlider, SLOT(CurrentSizeSliderChanged(int)));
    connect(ui->horizontalSizeSlider, SIGNAL(iChanged(QObject*)), this, SLOT(actByChange(QObject*)));

}

void MainWindow::actByChange(QObject* senderObj){
    if(senderObj == ui->FontSize_lineEdit){
        if(ui->FontSize_lineEdit->text() == "small") {
            QFont font = ui->TargetLabel->font();
            font.setPointSize(10);
            ui->TargetLabel->setFont(font);
            ui->FontSize_comboBox->setCurrentText(ui->FontSize_lineEdit->text());
            ui->horizontalSizeSlider->setValue(10);
        }
        else if(ui->FontSize_lineEdit->text() == "medium") {
            QFont font = ui->TargetLabel->font();
            font.setPointSize(20);
            ui->TargetLabel->setFont(font);
            ui->FontSize_comboBox->setCurrentText(ui->FontSize_lineEdit->text());
            ui->horizontalSizeSlider->setValue(20);
        }
        else if(ui->FontSize_lineEdit->text() == "big") {
            QFont font = ui->TargetLabel->font();
            font.setPointSize(40);
            ui->TargetLabel->setFont(font);
            ui->FontSize_comboBox->setCurrentText(ui->FontSize_lineEdit->text());
            ui->horizontalSizeSlider->setValue(40);
        }
    }

    else if(senderObj == ui->FontSize_comboBox){
        if(ui->FontSize_comboBox->currentText() == "small") {
            QFont font = ui->TargetLabel->font();
            font.setPointSize(10);
            ui->TargetLabel->setFont(font);
            ui->FontSize_lineEdit->setText(ui->FontSize_comboBox->currentText());
            ui->horizontalSizeSlider->setValue(10);
        }
        else if(ui->FontSize_comboBox->currentText() == "medium") {
            QFont font = ui->TargetLabel->font();
            font.setPointSize(20);
            ui->TargetLabel->setFont(font);
            ui->FontSize_lineEdit->setText(ui->FontSize_comboBox->currentText());
            ui->horizontalSizeSlider->setValue(20);
        }
        else if(ui->FontSize_comboBox->currentText() == "big") {
            QFont font = ui->TargetLabel->font();
            font.setPointSize(40);
            ui->TargetLabel->setFont(font);
            ui->FontSize_lineEdit->setText(ui->FontSize_comboBox->currentText());
            ui->horizontalSizeSlider->setValue(40);
        }
    }

    else if (senderObj == ui->Arial_Chk){
        QFont font = ui->TargetLabel->font();
        font.setFamily("Arial");
        ui->TargetLabel->setFont(font);
    }

    else if (senderObj == ui->TimesNewRoman_Chk) {
        QFont font = ui->TargetLabel->font();
        font.setFamily("Times New Roman");
        ui->TargetLabel->setFont(font);
    }
    else if (senderObj == ui->ComicSansMS_Chk){
        QFont font = ui->TargetLabel->font();
        font.setFamily("Comic Sans MS");
        ui->TargetLabel->setFont(font);
    }
    else if (senderObj == ui->horizontalSizeSlider){
        QFont font = ui->TargetLabel->font();
        font.setPointSize(ui->horizontalSizeSlider->value());
        ui->TargetLabel->setFont(font);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

