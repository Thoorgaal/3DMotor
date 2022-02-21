#ifndef TRANSFORMATION_HPP
#define TRANSFORMATION_HPP
#include "../Matrix/Matrix.hpp"
#include "../Coord/Coord.hpp"


//this class is made for manage any point's, shape's transformation
class Transformation{
    protected:
        Matrix transformation;
    public:
        Transformation(Matrix trans);
        void operator()(Coord& coord) const;
};



#endif