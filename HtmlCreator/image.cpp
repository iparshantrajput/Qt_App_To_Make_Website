#include "image.h"

image::image()
{

}
image::~image(){}
void image::setImage(const QString imageAddress,const int imageWidth,const int imageHeight){
    QFile html("D:/BSCS/DSU/2nd SEMESTER/OOP Lab/Project/Project/htmlFiles/home.html");

    if(html.open(QFile::Append)){
        QTextStream out(&html);
        out << "<img " << "src = " << imageAddress << " width= " << imageWidth << "px;" << " height= " << imageHeight << "px;" << ">" << "</img>" << endl;
        html.flush();
        html.close();
    }
}
void image::setBackgroundImage(const QString backgroundImage){
    QFile html("D:/BSCS/DSU/2nd SEMESTER/OOP Lab/Project/Project/htmlFiles/home.html");

    if(html.open(QFile::Append)){
        QTextStream out(&html);
        out << "<body " << backgroundImage << " </body>" << endl;
        html.flush();
        html.close();
    }
}
