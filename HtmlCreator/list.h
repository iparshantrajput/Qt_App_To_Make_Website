#ifndef LIST_H
#define LIST_H
#include "html.h"


class list:public html
{
public:
    list();
    virtual ~list();
    void setList(const QString item1,const QString item2,const QString item3,const QString item4,const QString item5);
    void setListStyle(const QString listStyle);
    void setListProperty(const QString listProperty);
public:
    QString listStyle;
    QString listProperty;
};

#endif // LIST_H
