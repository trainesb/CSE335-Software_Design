#ifndef RESETBUTTON_H
#define RESETBUTTON_H
#include <QPushButton>

class resetbutton: public QPushButton{
    Q_OBJECT
public:
    resetbutton(QWidget* qw):QPushButton(qw){}
signals:
    void iChanged(QObject*);

private slots:
    void setReset();
};

#endif // RESETBUTTON_H
