#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QObject>
#include <QPushButton>

class MyPushButton:public QPushButton  {
    Q_OBJECT

public:
   MyPushButton(QWidget* qw):QPushButton(qw){}

signals:
   void iChanged(QObject*);

public slots:
   void iClicked();
};

#endif // MYPUSHBUTTON_H
