#include <iostream>
#include <array>
#include "Model/Matrix/Matrix.hpp"

int main(){
    std::array<float,16> m  {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    std::array<float,16> m1  {1,0,0,0,
                              0,1,0,0,
                              0,0,1,0,
                              0,0,0,1};
    Matrix mat1(m);
    Matrix mat2{m1};
    std::cout << mat1*mat2 << std::endl;
    return 0;
}