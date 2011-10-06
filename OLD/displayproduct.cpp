#include "displayproduct.h"
#include "ui_displayproduct.h"

DisplayProduct::DisplayProduct(QWidget *parent) : QDialog(parent), ui(new Ui::DisplayProduct)
{
    ui->setupUi(this);

    QToolButton* boutonCafe = new QToolButton();
    boutonCafe->setIcon( QIcon( "cafe.png" ) );
    boutonCafe->setText( "Café 0.50"+QString(8364) );
    boutonCafe->setIconSize(QSize(128,128));
    boutonCafe->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    boutonCafe->setFont( QFont( "MV Boli", 10, QFont::Bold ) );

    QToolButton* boutonPizza = new QToolButton();
    boutonPizza->setIcon( QIcon( "pizza.png" ) );
    boutonPizza->setText( "Pizza 2.50"+QString(8364) );
    boutonPizza->setIconSize(QSize(128,128));
    boutonPizza->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    boutonPizza->setFont( QFont( "MV Boli", 10, QFont::Bold ) );

    ui->gridLayout->addWidget( boutonCafe, 1, 0, 1, 1 );
    ui->gridLayout->addWidget( boutonPizza, 1, 1, 1, 1 );
}

DisplayProduct::~DisplayProduct()
{
    delete ui;
}
