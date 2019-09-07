#ifndef FONTSIZECOMBO_H
#define FONTSIZECOMBO_H
#include <QComboBox>

class FontSizeCombo: public QComboBox{
    Q_OBJECT

public:
    FontSizeCombo(QWidget* qw):QComboBox(qw){}

signals:
    void iChanged(QObject*);

public slots:
    void CurrentSizeChanged(const QString&);
};

#endif // FONTSIZECOMBO_H
