#include "clog.h"

CLog::CLog()
{
}

void CLog::ecrire( QString message )
{
    QDate date = QDate::currentDate();
    QTime time = QTime::currentTime();
    QString nomFichier = date.toString( Qt::ISODate );

    QFile fichier( "systeme/log/"+nomFichier );
    if( fichier.open( QIODevice::WriteOnly | QIODevice::Append ) )
    {
        QTextStream out(&fichier);
        out << time.toString() << " - " << message << "\n";

        fichier.close();
    }
    else
    {
        QMessageBox::warning( NULL, "KFet", "Impossible d'ouvrir le fichier de log déjç crée." );
    }
}
