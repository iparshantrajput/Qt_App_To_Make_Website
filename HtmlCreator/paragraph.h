#ifndef PARAGRAPH_H
#define PARAGRAPH_H
#include "html.h"

class paragraph :public html
{
public:
    paragraph();
    virtual ~paragraph();
    void setParagraph(const QString paragraph);
    void setParagraphItalic(const QString paragraphItalic);
    void setParagraphBold(const QString paragraphBold);
    void setParagraphColor(const QString paragraphColor);
private:
    QString paragraphBold;
    QString paragraphItalic;
    QString paragraphColor;
};

#endif // PARAGRAPH_H
