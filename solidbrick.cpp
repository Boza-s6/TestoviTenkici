#include "solidbrick.h"

SolidBrick::SolidBrick()
    :Brick()
{

}

SolidBrick::SolidBrick(qreal x, qreal y)
    :Brick("./img/stone.png", x, y)
{
}

SolidBrick::~SolidBrick()
{

}

void SolidBrick::hitted(int)
{
    return;
}

