#ifndef TITLE_H
#define TITLE_H
#include "html.h"
class title:public html{
    public:
        title();
        virtual ~title();
        void setTitle(const QString title);
};

#endif // TITLE_H
