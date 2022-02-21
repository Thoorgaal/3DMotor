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
float Coord::operator[](std::size_t i) const{
    return this->coord[i];
}
bool operator==(Coord const& c1,Coord const& c2){
    for(std::size_t i =0; i<3;i++){
        if(c1[i]!=c2[i]){
            return  false;
        }
    }
    return true;
}
bool operator!=(Coord const& c1, Coord const& c2){
    for(std::size_t i = 0; i<3; i++){
        if(c1[i]!=c2[i]){
            return true;
        }
    }
    return false;
}