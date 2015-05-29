#include "glavniprozor.h"
#include "ui_glavniprozor.h"

GlavniProzor::GlavniProzor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GlavniProzor)
{
    ui->setupUi(this);
    mScena = new QGraphicsScene(QRectF(0, 0, 1000, 700), this);
    ui->graphicsView->setScene(mScena);
    ui->graphicsView->setBackgroundBrush(QBrush(QPixmap("./img/bg_pattern.png")));


    //pravimo dugmice za pocetak igre i za izlazak iz igre
    mDugmeNovaIgra = new QPushButton(QString("Nova Igra"));
    mDugmeIzadji = new QPushButton(QString("Izadji"));
    connect(mDugmeNovaIgra, SIGNAL(clicked()), this, SLOT(inicijalizujIgru()));
    connect(mDugmeIzadji, SIGNAL(clicked()), this, SLOT(izadji()));

    //postavljamo dugmice na scenu
    mProxyDugmeNovaIgra = mScena->addWidget(mDugmeNovaIgra);
    mProxyDugmeNovaIgra->setPos(450, 300);
    mProxyDugmeIzadji = mScena->addWidget(mDugmeIzadji);
    mProxyDugmeIzadji->setPos(450, 350);

    mScreen = QApplication::desktop()->screenGeometry();

    ui->graphicsView->setGeometry(0, 0, mScreen.width(), mScreen.height());
}

GlavniProzor::~GlavniProzor()
{
    delete ui;
    delete mScena;
}

void GlavniProzor::inicijalizujIgru()
{
    //uklanjamo dumice sa scene
    mScena->removeItem(mProxyDugmeNovaIgra);
    mScena->removeItem(mProxyDugmeIzadji);

    Map::readMap(mScena, "./maps/first.map");


    ui->graphicsView->scale(mScreen.width()/ui->graphicsView->sceneRect().width() - 0.1,
                            mScreen.height()/ui->graphicsView->sceneRect().height() - 0.1);

}

void GlavniProzor::izadji()
{
    this->destroy();
}
