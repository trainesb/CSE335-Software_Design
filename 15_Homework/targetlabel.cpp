#include "targetlabel.h"
#include <QFont>

//---Size By Family---
void TargetLabel::setSizeByFamily(QString qs){
    if(qs == "small"){
        TargetLabel::setFontSize(10);
    } else if (qs == "medium") {
        TargetLabel::setFontSize(20);
    } else if (qs == "big") {
        TargetLabel::setFontSize(40);
    }
}

void TargetLabel::setSizeByFamilyText(QString qs){
    TargetLabel::setSizeByFamily(qs);
}


//---Font---
void TargetLabel::setArial(){
    QFont font("Arial");
    this->setFont(font);
    //QMessageBox::about(this, "test", font.toString());
}

void TargetLabel::setTimesNewRoman(){
    QFont font("Times New Roman");
    this->setFont(font);
    //QMessageBox::about(this, "test", font.toString());
}

void TargetLabel::setComicSansMS(){
    QFont font("Comic Sans MS");
    this->setFont(font);
    //QMessageBox::about(this, "test", font.toString());
}


//---Font Size---
void TargetLabel::setFontSize(int size){
    QFont font = this->font();
    font.setPixelSize(size);
    this->setFont(font);
    //QMessageBox::about(this, "test", font.toString());
}
