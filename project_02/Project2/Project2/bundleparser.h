#ifndef BUNDLEPARSER_H
#define BUNDLEPARSER_H

#include "parser.h"

class BundleParser : public Parser {
public:
    BundleParser() : Parser() {}
    ~BundleParser() {}
    virtual void parse(QString filename);
};

#endif // BUNDLEPARSER_H
