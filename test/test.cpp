#include "test.hpp"
#include <array>
#include <assert.h>
#include "../Model/Matrix/Matrix.hpp"
#include "../Model/Coord/Coord.hpp"


void test::testMatrix(){
    std::array<float,16> t{1,0,0,0,
                            0,1,0,0,
                            0,0,1,0,
                            0,0,0,1};
    std::array<float,16> t1{1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    Matrix m1{t};
    Matrix m2{t1};
    assert(m1!=m2);
    assert(m1==m1);
    assert(m1*m2==m2*m1);
    assert(m1*m2==m2);


}

void test::testCalcCoord(){
    std::array<float,16> t{1,0,0,0,
                            0,1,0,0,
                            0,0,1,0,
                            0,0,0,1};
    std::array<float,3> c{1,2,3};
    Matrix m{t};
    Coord coord{c};
    assert(coord*m == coord);


}

void test::test_all(){
    this->testMatrix();
    this->testCalcCoord();
}