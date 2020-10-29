#include "paragraph.h"

paragraph::paragraph()
{

}
paragraph::~paragraph(){}
void paragraph::setParagraph(const QString paragraph){
    QFile html("D:/BSCS/DSU/2nd SEMESTER/OOP Lab/Project/Project/htmlFiles/home.html");

    if(html.open(QFile::Append)){
        QTextStream out(&html);
        if((paragraphBold == "") && (paragraphItalic == ""))
            out << "<p" << " " << paragraphColor << ">" << paragraph << "</p>" << endl;
        else if(paragraphBold == "")
            out << "<p" << " " << paragraphColor << ">" << "<" << paragraphItalic << paragraph << "</" << paragraphItalic << "</p> << endl";
        else if(paragraphItalic == "")
            out << "<p" << " " << paragraphColor << ">" << "<" << paragraphBold << paragraph << "</" << paragraphBold << "</p>" << endl;
        else
            out << "<p" << " " << paragraphColor << ">" << "<" << paragraphBold << "<" << paragraphItalic << paragraph << "</" << paragraphItalic << "</" << paragraphBold << "</p>" << endl;
        html.flush();
        html.close();
    }
}
void paragraph::setParagraphBold(const QString paragraphBold){
    this->paragraphBold = paragraphBold;
}
void paragraph::setParagraphItalic(const QString paragraphItalic){
    this->paragraphItalic = paragraphItalic;
}
void paragraph::setParagraphColor(const QString paragraphColor){
    this->paragraphColor = paragraphColor;
}
