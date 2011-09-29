#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QTableWidget* etuTable = new QTableWidget( ui->tab );

    QStringList header;
    header << "Nom" << "Prénom" << "Dette";

    etuTable->setFixedHeight( ui->tab->height() );
    etuTable->setFixedWidth( ui->tab->width() );
    etuTable->setColumnCount(3);
    etuTable->setHorizontalHeaderLabels( header );

    etuTable->setRowCount( 1 );
    QTableWidgetItem* item = new QTableWidgetItem("WOOLOLO");
    etuTable->setItem(0,0, item );

    QToolButton* boutonCafe = new QToolButton();
    boutonCafe->setIcon( QIcon( "cafe.png" ) );
    boutonCafe->setText( "Café 0.50"+QString(8364) );
    boutonCafe->setIconSize(QSize(64,64));
    boutonCafe->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    boutonCafe->setFont( QFont( "MV Boli", 10, QFont::Bold ) );

    QToolButton* boutonPizza = new QToolButton();
    boutonPizza->setIcon( QIcon( "pizza.png" ) );
    boutonPizza->setText( "Pizza 2.50"+QString(8364) );
    boutonPizza->setIconSize(QSize(64,64));
    boutonPizza->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    boutonPizza->setFont( QFont( "MV Boli", 10, QFont::Bold ) );

    ui->gridLayout->addWidget( boutonCafe, 1, 0, 1, 1 );
    ui->gridLayout->addWidget( boutonPizza, 1, 1, 1, 1 );

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("localhost");
    db.setDatabaseName("kfet");
    bool ok = db.open();

    qDebug() << db.tables() << endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}
