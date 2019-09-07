#ifndef MYSLIDER_H
#define MYSLIDER_H
#include <QSlider>

class myslider: public QSlider{
    Q_OBJECT
public:
    myslider(QWidget* qw):QSlider(qw){}
signals:
    void iChanged(QObject*);
public slots:
    void mySliderChanged();
};

#endif // MYSLIDER_H
