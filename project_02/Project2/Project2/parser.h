#ifndef PARSER_H
#define PARSER_H

#include <QString>
#include "builder.h"

class Parser {
protected:
    Builder* m_builder;

public:
    virtual ~Parser() {}
    void setBuilder(Builder* b) { m_builder = b; }
    virtual void parse(QString filename) = 0;
};

#endif // PARSER_H
