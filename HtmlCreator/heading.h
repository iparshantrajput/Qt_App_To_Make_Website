#ifndef HEADING_H
#define HEADING_H
#include "html.h"

class heading:public html
{
public:
    heading();
    virtual ~heading();
    void setHeading(const QString heading);
    void setHeadingSize(const QString headingSize);
    void setHeadingColor(const QString headingColor);
private:
        QString headingSize;
        QString headingColor;
};

#endif // HEADING_H
