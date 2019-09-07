#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H
#include <QLineEdit>

class mylineedit: public QLineEdit {
    Q_OBJECT
public:
    mylineedit(const QString& qs):QLineEdit(qs){}
    mylineedit(QWidget* qw):QLineEdit(qw){}
signals:
    void iChanged(QObject*);
public slots:
    void myTextChanged();
};


#endif // MYLINEEDIT_H
