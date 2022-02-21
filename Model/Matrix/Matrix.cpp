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
    for(std::size_t i= 0; i<16; i++){
        os << mat[i];
        if((i+1)%4 == 0){
            os << std::endl;
        }
    }
    return os;
}

float Matrix::operator[](std::size_t i) const{
    return this->matrix[i];
}



bool operator==(Matrix const& m1,Matrix const& m2) {
    for(std::size_t i = 0; i<16;i++){
        if(m1[i] != m2[i]){
            return false;
        }
    }
    return true;
}
bool operator!=(Matrix const& m1,Matrix const& m2){
    for(size_t i = 0 ; i<16 ; i++){
        if(m1[i]!=m2[i])
        return true;
    }
    return false;
}
Matrix operator+(Matrix const& m1,Matrix const& m2){
    std::array<float,16> res;
    for(std::size_t i = 0; i<16;i++){
        res[i] = m1[i]+ m2[i];
    }
    return res;
}
float getCalcM(Matrix const& m1,Matrix const& m2, std::size_t l1,std::size_t c2){
    float res =0;
    for(std::size_t i = 0; i<4;i++){
        res+= m1[l1*4+i]*m2[c2 +4*i];
    } 
    return res;
}

Matrix operator*(Matrix const& m1,Matrix const& m2){
    std::array<float,16> res;
    for(std::size_t i = 0;i<16;i++){
        res[i] = getCalcM(m1,m2,(std::size_t) i/4,i%4);
    }
    return Matrix {res};
}


float getCalcCoord(Matrix const& m, Coord const& coord, std::size_t c){
    float res = 0;
    for(std::size_t i =0; i<4;i++){
        res += coord[i]*m[c+4*i];
    }
    return res;
}

Coord operator*(Coord const& coord,Matrix const& m){
    std::array<float,3> res;
    for(std::size_t i = 0; i<4;i++){
        res[i] = getCalcCoord(m,coord,i%4);
    }
    
    return Coord{res};

}

