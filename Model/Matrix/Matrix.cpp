#include "Matrix.hpp"
#include <array>
#include <iostream>


Matrix::Matrix(std::array<float,16> cmatrix){
    this->matrix = cmatrix;
}
float Matrix::getI(std::size_t i) const{
    return this->matrix[i];
}
std::ostream& operator<<(std::ostream &os, Matrix const& mat){
    for(int i =0;i<4;i++){
        for(int j = 0; j<4;j++){
            os << mat.getI(3*i+j) << " ";
        }
        os << std::endl;
    }
    return os;
}
Matrix operator+(Matrix const& m1,Matrix const& m2){
    std::array<float,16> res;
    for(std::size_t i = 0; i<16;i++){
        res[i] = m1.getI(i) + m2.getI(i);
    }
    return res;
}
float getCalc(Matrix const& m1,Matrix const& m2, size_t l1,size_t c2){
    float res =0;
    for(std::size_t i = 0; i<3;i++){
        res+= m1.getI(3*l1 +i)*m2.getI(3*c2 +i);
    }
    return res;
}
float getCalc(Matrix const& m, Coord const& coord, std::size_t l){
    float res = 0;
    std::array<float,3> c = coord.getCoord();
    for(std::size_t i = 0; i<4;i++){
        res+=m.getI(3*l + i)*c[i];
    }
}
Matrix operator*(Matrix const& m1,Matrix const& m2){
    std::array<float,16> res;
    for(std::size_t i =0;i<4;i++){
        for(std::size_t j = 0; j<4;j++){
            res[3*i+j] = getCalc(m1,m2,i,j);
        }
        
    }
}

Coord operator*(Matrix const& m, Coord const& coord){
    std::array<float,3> res;
    for(std::size_t i = 0; i<4;i++){
        res[i] = getCalc(m,coord,i);
    }
    Coord cr = Coord(res);
    return cr;

}

