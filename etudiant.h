#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "client.h"

class Etudiant : public Client
{
public:
    Etudiant();

private:
    QString promo;
    QString status;
};

#endif // ETUDIANT_H
