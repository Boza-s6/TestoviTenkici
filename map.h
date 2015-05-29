#ifndef MAP_H
#define MAP_H
#include <QGraphicsScene>
#include <iostream>
#include <istream>
#include <fstream>
#include <string>
#include <sstream>
#include "brick.h"
#include "solidbrick.h"
#include "fenix.h"

//static const int NUM_LINES = 14, NUM_BRICKS_IN_LINE = 20;
//static const qreal BRICK_SIZE = 50.0;

//const char * FIRST_MAP = "./maps/first.map",
//           * SECOND_MAP = "./maps/second.map",
//           * THIRD_MAP = "./maps/third.map";

enum BrickType{
    NO_BRICK = 0,
    BRICK = 1,
    SOLID_BRICK = 2,
    FENIX = 3
};
namespace Map {

    void readMap(QGraphicsScene * scena, const char * map = "./maps/first.map");
}

#endif // MAP_H

