#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "client.h"

class CEtudiant : public CClient
{
public:
    CEtudiant();

private:
    QString sETUpromo;
    QString sETUstatus;
};

#endif // ETUDIANT_H
