#include "Camera.hpp"
#include "../Coord/Coord.hpp"

Camera::Camera(Coord Position, Coord directionPointed, Coord UpD,Coord Near, Coord Far,float viewingAngle){
    this->Position = Position;
    this->directionPointed = directionPointed;
    this->UpD = UpD;
    this->Near = Near;
    this->Far = Far;
    this->viewingAngle = viewingAngle;
}