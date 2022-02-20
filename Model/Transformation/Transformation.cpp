#include "Transformation.hpp"
#include "../Matrix/Matrix.hpp"
#include "../Coord/Coord.hpp"

Transformation::Transformation(Matrix trans){
    this->transformation = trans;
}
void Transformation::operator()(Coord & coord) const{
    coord.setCoord(this->transformation * coord.getCoord());  
}