#ifndef CLOG_H
#define CLOG_H

#include <QDate>
#include <QTime>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>

class CLog
{
public:
    CLog();

    static void ecrire( QString message );
};

#endif // CLOG_H
