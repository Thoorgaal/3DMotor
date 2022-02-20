#ifndef COORD_HPP
#define COORD_HPP

#include <array>

class Coord{
    private:
        std::array<float,3> coord;
    public:
        Coord();
        Coord(std::array<float,3> C);
        float getX() const;
        void setX(float x);
        float getY() const;
        void setY(float y);
        float getO() const;
        void setO(float O);
        std::array<float,3> getCoord() const;
        void setCoord(std::array<float,3> c);
};

#endif