#ifndef IMAGE_H
#define IMAGE_H
#include "html.h"

class image:public html
{
public:
    image();
    ~image();
    void setImage(const QString imageAddress,const int imageWidth,const int imageHeight);
    void setBackgroundImage(const QString backgroundImage);
};

#endif // IMAGE_H
