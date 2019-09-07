#include "builder.h"

void Builder::addRow() {
    QMap<QString, QString> emptyMap;
    m_tableVals.append(emptyMap);
}

void Builder::addName(QString product) {
    m_tableVals[m_index]["productName"] = product;
}


void Builder::addPrice(QString price) {
    m_tableVals[m_index]["price"] = price;
}
