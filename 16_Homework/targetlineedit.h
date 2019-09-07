#ifndef TARGETLINEEDIT_H
#define TARGETLINEEDIT_H
#include <QLineEdit>

class TargetLineEdit: public QLineEdit{
    Q_OBJECT

public:
    TargetLineEdit(const QString& qs):QLineEdit(qs){};
    TargetLineEdit(QWidget* qw):QLineEdit(qw){};

signals:
    void iChanged(QObject*);

public slots:
    void myEditingFinished();
};

#endif // TARGETLINEEDIT_H
