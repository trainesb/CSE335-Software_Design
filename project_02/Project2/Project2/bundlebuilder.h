#ifndef BUNDLEBUILDER_H
#define BUNDLEBUILDER_H

#include "builder.h"

class BundleBuilder : public Builder {
private:
    QList<QStringList> m_bundleItems;
public:
    BundleBuilder() { m_index = 0; }
    ~BundleBuilder() {}
    virtual void addType(QString type) {}
    virtual void addAttribute(QString attribute) {}
    virtual void addBundleItems(QStringList qsl) { m_bundleItems.append(qsl); }
    virtual QList<QStringList> getBundleItems() { return m_bundleItems; }
};

#endif // BUNDLEBUILDER_H
