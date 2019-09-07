#ifndef TARGETLABEL_H
#define TARGETLABEL_H

#include <QObject>
#include <QLabel>
#include <QFont>
#include <QMessageBox>

class TargetLabel: public QLabel{
    Q_OBJECT

public:
    TargetLabel(QWidget* qw):QLabel(qw){}

public slots:
    //Recevier for Family Size Type
    void setSizeByFamily(QString);
    void setSizeByFamilyText(QString);


    //Recevier for Font Family
    void setArial();
    void setTimesNewRoman();
    void setComicSansMS();


    //Recevier for Font Size
    void setFontSize(int);

};

#endif // TARGETLABEL_H
