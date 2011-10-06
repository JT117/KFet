#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>

class CProduct
{
public:
    CProduct();

private:
    QString sPROnom;
    float fPROprix;
    QString sPROcheminImage;
    int iPROid;
};

#endif // PRODUCT_H
