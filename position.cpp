#include "position.h"
#include <math.h>

Position::Position()
{
    x = 0;
    y = 0;
    a = 0;
}

Position::~Position()
{

}

void Position::setX(float newX) {
    x = newX;
}

void Position::setY(float newY) {
    y = newY;
}

void Position::setA(float newA) {
    a = newA;
}

void Position::set(float newX, float newY, float newA) {
    x = newX;
    y = newY;
    a = newA;
}

void Position::setFromCanMsg(TPCANMsg canMsg) {
    x = canMsg.DATA[0] + 256*canMsg.DATA[1];
    if (canMsg.DATA[1] > 128)
        x -= 0x10000;
    x *=1E-3;
    y = canMsg.DATA[2] + 256*canMsg.DATA[3];
    if (canMsg.DATA[3] > 128)
        y -= 0x10000;
    y *= 1E-3;
    a = canMsg.DATA[4] + 256*canMsg.DATA[5];
    if (canMsg.DATA[5] > 128)
        a -= 0x10000;
    a *= (M_PI/1800);
}

float Position::getX() {
    return(x);
}

float Position::getY() {
    return(y);
}

float Position::getA() {
    return(a);
}

Position Position::operator+(const Position& b) {
    Position c;

    c.x = this->x + b.x;
    c.y = this->y + b.y;
    c.a = this->a + b.a;
    return (c);
}

bool Position::operator!=(const Position& b) {
    return ( (this->x != b.x) || (this->y != b.y) || (this->a != b.a) );
}

bool Position::operator==(const Position& b) {
    return ( (this->x == b.x) && (this->y == b.y) && (this->a == b.a) );
}
