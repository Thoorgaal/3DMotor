#ifndef CAMERA_HPP
#define CAMERA_HPP
#include "../Coord/Coord.hpp"

class Camera{
    private:
        Coord Position,directionPointed,UpD,Near,Far;
        float viewingAngle;
    public:
        Camera() = default;
        Camera(Coord Position, Coord directionPointed, Coord UpD,Coord Near, Coord Far,float viewingAngle);       

};

#endif 