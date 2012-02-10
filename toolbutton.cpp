#include "toolbutton.h"
#include "mainwindow.h"

ToolButton::ToolButton() : QToolButton()
{
    setAcceptDrops( false ); //Ne pas utiliser
}

ToolButton::ToolButton(QGridLayout* layout, int numero, MainWindow* main ) : QToolButton(), gridLayout( layout ), numeroDansLaListe( numero ), mainWindow( main )
{
    setAcceptDrops( true );
}

void ToolButton::mousePressEvent(QMouseEvent * event)
{
    if (event->button() == Qt::LeftButton  )
    {
        startDragPosition = event->pos();
    }

    QToolButton::mousePressEvent(event);
}

void ToolButton::mouseMoveEvent(QMouseEvent *event )
{
    if (!(event->buttons() & Qt::LeftButton))
    {
        return;
    }
    if( (event->pos() - startDragPosition).manhattanLength() < QApplication::startDragDistance() )
    {
        return;
    }

   /* gridLayout->removeWidget( this );
    gridLayout->update();
    qDebug() << "test";*/

    QDrag *drag = new QDrag(this);
    QMimeData *mimeData = new QMimeData;
    mimeData->setText( "Drag and Drop" );
    mimeData->setData( "number", QString::number( numeroDansLaListe ).toUtf8() );
    drag->setMimeData( mimeData );
    drag->setPixmap( this->icon().pixmap( 64, 64 ) );
    event->accept();

    drag->exec(Qt::MoveAction);

    mainWindow->updateProduit();
}

void ToolButton::dropEvent(QDropEvent *event)
{
    int numeroActuel = event->mimeData()->data( "number" ).toInt();
    int numeroCible = numeroDansLaListe;

    QList<int> liste = Settings::getBoutonList();

    int memoire = liste.at( numeroActuel );
    liste.removeAt( numeroActuel );
    liste.insert( numeroCible, memoire );

    Settings::setBoutonList( liste );

    event->acceptProposedAction();
}

void ToolButton::dragEnterEvent(QDragEnterEvent *event)
 {
     if (event->mimeData()->hasFormat("text/plain"))
     {
         event->acceptProposedAction();
     }
 }
