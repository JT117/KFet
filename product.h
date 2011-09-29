#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>

class Product
{
public:
    Product();

private:
    QString nom;
    float prix;
    QString cheminImage;
    int id;
};

#endif // PRODUCT_H
