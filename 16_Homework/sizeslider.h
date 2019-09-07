#ifndef SIZESLIDER_H
#define SIZESLIDER_H
#include <QSlider>


class SizeSlider: public QSlider{
    Q_OBJECT

public:
    SizeSlider(QWidget* qw):QSlider(qw){}

signals:
    void iChanged(QObject*);

public slots:
    void CurrentSizeSliderChanged(int num);
};

#endif // SIZESLIDER_H
