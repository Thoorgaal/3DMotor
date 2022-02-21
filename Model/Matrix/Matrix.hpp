#ifndef MATRIX_HPP
#define MATRIX_HPP
#include <array>
#include <iostream>
#include "../Coord/Coord.hpp"


//this class is made for mange the matrix used for moving points away
class Matrix{
    private:
        std::array<float,16> matrix;
    public:
        Matrix();
        Matrix(std::array<float,16> cmatrix);
        float getI(std::size_t i) const;
        float operator[](std::size_t i) const;
};

std::ostream& operator<<(std::ostream &os, Matrix const& mat);

bool operator==(Matrix const& m1,Matrix const& m2);

bool operator!=(Matrix const& m1,Matrix const& m2);

Matrix operator+(Matrix const& m1,Matrix const& m2);

//this function is made just for gate the result of one step of the entire calcul
float getCalcM(Matrix const& m1,Matrix const& m2, size_t l1,size_t l2);



Matrix operator*(Matrix const& m1,Matrix const& m2);

float getCalcCoord(Matrix const& m, Coord const& coord, std::size_t l);

Coord operator*(Coord const& coord,Matrix const& m );

#endif