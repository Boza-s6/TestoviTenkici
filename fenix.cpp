#include "fenix.h"

Fenix::Fenix()
    :SpecialQGraphicsPixmapItem(), mHealth(300)
{

}

Fenix::Fenix(qreal x, qreal y)
    : SpecialQGraphicsPixmapItem(":/img/fenix.png", x, y), mHealth(300)
{

}

Fenix::~Fenix()
{

}

void Fenix::hitted(int damage)
{
    mHealth -= damage;
    if(mHealth <= 0)
    {
        scene()->removeItem(this);
        delete this;
        emit fenixDestroyed();
    }
}

