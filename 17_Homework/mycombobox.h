#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H
#include <QComboBox>

class mycombobox: public QComboBox {
    Q_OBJECT
public:
    mycombobox(QWidget* qw):QComboBox(qw){}
signals:
    void iChanged(QObject*);
public slots:
    void myComboBoxChanged();
};

#endif // MYCOMBOBOX_H
