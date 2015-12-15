#ifndef POSITION_H
#define POSITION_H

#include "PCANBasic.h"

class Position
{
public:
    Position();
    ~Position();
    void setX(float newX);
    void setY(float newY);
    void setA(float newA);
    void set(float x, float y, float a);
    void setFromCanMsg(TPCANMsg canMsg);
    float getX();
    float getY();
    float getA();
    Position operator+(const Position& b);
    bool operator!=(const Position& b);
    bool operator==(const Position& b);

private:
    float x;
    float y;
    float a;
};

#endif // POSITION_H
