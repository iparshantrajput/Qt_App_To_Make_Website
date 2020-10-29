#ifndef LINK_H
#define LINK_H
#include "html.h"

class link: public html
{
public:
    link();
    virtual ~link();
    void setLink(const QString linkAddress,const QString linkName);
private:
    QString linkAddress;
    QString linkName;
};

#endif // LINK_H
