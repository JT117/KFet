#include "tab.h"

CTab::CTab()
{
}

CTab::CTab( QString nom1 )
{
    nom = nom1;
    etuTable = new QTableWidget;

    vbox = new QVBoxLayout;
    vbox->addWidget( etuTable );
    this->setLayout( vbox );

    setupClient();
}

CTab::~CTab()
{
    delete etuTable;
    delete vbox;

    for( int i = 0; i < listClient.size(); i++ )
    {
        delete listClient.at(i);
    }
}

void CTab::setupClient()
{
    etuTable->setSortingEnabled( false );

    QStringList header;
    header << "Nom" << "Prénom" << "Promo" << "Dette";
    etuTable->setColumnCount(4);
    etuTable->setHorizontalHeaderLabels( header );
    etuTable->setColumnWidth(0,126);
    etuTable->setColumnWidth(1,126);

    CGestionBDD::getClientList( listClient, nom );

    etuTable->setSelectionBehavior( QAbstractItemView::SelectRows );
    etuTable->setSelectionMode( QAbstractItemView::SingleSelection );
    etuTable->setRowCount( listClient.size() );

    for( int i = 0; i < listClient.size(); i++ )
    {
        QColor couleur( 255, 255, 255 );

        if( listClient.at(i)->getDette() < 0 )
        {
            couleur.setRgb( 104, 255, 122 );
        }
        else if( ( nom == "KFtier" && listClient.at(i)->getDette() >= Settings::getDetteKFtier() ) ||
                 ( nom != "KFtier" && listClient.at(i)->getDette() >= Settings::getDetteClient() ) )
        {
            couleur.setRgb( 255, 95, 25 );
        }

        QTableWidgetItem* item = new QTableWidgetItem( listClient.at(i)->getNom() );
        item->setBackgroundColor( couleur );
        item->setTextAlignment(Qt::AlignCenter);
        item->setFlags( Qt::ItemIsSelectable | Qt::ItemIsEnabled );
        etuTable->setItem(i,0, item );

        QTableWidgetItem* item2 = new QTableWidgetItem( listClient.at(i)->getPrenom() );
        item2->setBackgroundColor( couleur );
        item2->setTextAlignment(Qt::AlignCenter);
        item2->setFlags( Qt::ItemIsSelectable | Qt::ItemIsEnabled );
        etuTable->setItem(i,1, item2 );

        QTableWidgetItem* item3 = new QTableWidgetItem( listClient.at(i)->getPromo() );
        item3->setBackgroundColor( couleur );
        item3->setTextAlignment( Qt::AlignCenter );
        item3->setFlags( Qt::ItemIsSelectable | Qt::ItemIsEnabled );
        etuTable->setItem(i,2, item3 );

        QTableWidgetItem* item4 = new QTableWidgetItem( QString::number( listClient.at(i)->getDette() ) );
        item4->setBackgroundColor( couleur );
        item4->setTextAlignment(Qt::AlignCenter);
        item4->setFlags( Qt::ItemIsSelectable | Qt::ItemIsEnabled );
        etuTable->setItem(i,3, item4 );

        listClient[i]->getListItem().append( item );
        listClient[i]->getListItem().append( item2 );
        listClient[i]->getListItem().append( item3 );
        listClient[i]->getListItem().append( item4 );

    }

    etuTable->setSortingEnabled( true );
    etuTable->sortItems( 0 );
    etuTable->verticalHeader()->setVisible(false);
}

bool CTab::clientSelectionner()
{
    QList<QTableWidgetItem*> listItem = etuTable->selectedItems();

    return !listItem.isEmpty();
}

CClient* CTab::getSelectedClient()
{
    QList<QTableWidgetItem*> listItem = etuTable->selectedItems();

    if( !listItem.isEmpty() )
    {
        for( int i = 0; i < listClient.size(); i++ )
        {
            if( listClient[i]->getListItem().contains( listItem[0] ) )
            {
                return (listClient[i]);
            }
        }
    }
    return NULL;
}

void CTab::updateClient()
{
    for( int i = 0; i < listClient.size(); i++ )
    {
        delete listClient.at(i);
    }

    listClient.clear();
    etuTable->clear();
    setupClient();
}
