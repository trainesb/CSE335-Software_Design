#include <iostream>
#include <QFile>
#include <QStringList>
#include <QDir>
#include <QCoreApplication>
#include <QDebug>
#include "parser.h"

/**
 * @brief Parser::parse
 * Iterate through csv file and build table rows
 * @param filename QString name of csv file
 */
//void Parser::parse(QString filename) {

//    QFile file("/Users/Ryan/Desktop/MSU Classes/CSE 335/Project2/" + filename);
//    if (!file.exists()) {
//        qDebug() << file.errorString();
//        qDebug() << QDir::currentPath();
//        throw file.error();
//    }
//    if (!file.open(QIODevice::ReadOnly)) {
//        qDebug() << file.errorString();
//        qDebug() << QDir::currentPath();
//        throw file.error();
//    }

//    QStringList qsl;
//    while (!file.atEnd()) {
//        QString line = file.readLine();
//        qsl = line.split(',');
//        m_builder->addRow();
//        m_builder->addProductName(qsl[1]);
//        m_builder->addType(qsl[0]);
//        m_builder->addPrice(qsl[4]);
//        m_builder->addAttribute(qsl[5]);
//        m_builder->endRow();
//    }

//    file.close();
//}
