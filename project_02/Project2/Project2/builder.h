#ifndef BUILDER_H
#define BUILDER_H

#include <QString>
#include <QStringList>
#include <QList>
#include <QMap>

class Builder {
protected:
    QList<QMap<QString, QString>> m_tableVals;
    int m_index;
public:
    Builder() {  m_index = 0; }
    virtual ~Builder() {}
    void addRow();
    void addName(QString product);
    void addPrice(QString price);
    virtual void addType(QString type) = 0;
    virtual void addAttribute(QString attribute) = 0;
    virtual void addBundleItems(QStringList qsl) = 0;
    virtual QList<QStringList> getBundleItems() = 0;
    void endRow() { m_index++; }
    QList<QMap<QString, QString>> getTable() { return m_tableVals; }
};

#endif // BUILDER_H
