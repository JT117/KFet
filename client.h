#ifndef CLIENT_H
#define CLIENT_H

#include <QString>

class Client
{
public:
    Client();

protected:
    QString nom;
    QString prenom;
    int id;
    int dette;
};

#endif // CLIENT_H
