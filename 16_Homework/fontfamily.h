#ifndef FONTFAMILY_H
#define FONTFAMILY_H
#include <QRadioButton>

class FontFamily: public QRadioButton{
    Q_OBJECT

public:
    FontFamily(QWidget* qw):QRadioButton(qw){}
    FontFamily(QString qs):QRadioButton(qs){}

signals:
    void iChanged(QObject*);

public slots:
    void FontFamilyChanged();
};

#endif // FONTFAMILY_H
