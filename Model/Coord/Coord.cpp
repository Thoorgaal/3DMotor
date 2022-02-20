#include "Coord.hpp"
#include <array>


Coord::Coord(std::array<float,3> C){
    this->coord = C;
}

float Coord::getX() const{
    return this->coord[0];
}
void Coord::setX(float x){
    this->coord[0] = x;
}

float Coord::getY() const{
    return this->coord[1]; 
}
void Coord::setY(float y){
    this->coord[1] = y;
}
float Coord::getO() const{
    return this->coord[2];
}
void Coord::setO(float o){
    this->coord[2] = o;
}

std::array<float,3> Coord::getCoord() const{
    return this->coord;
}
void Coord::setCoord(std::array<float,3> c){
    this->coord = c;
}