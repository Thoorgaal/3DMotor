#include "Translation.hpp"
#include <array>

Translation::Translation(float x, float y, float z){
    std::array<float,16> matrix{1,0,0,0,
                                0,1,0,0,
                                x,y,z,1};
    Transformation(Matrix{matrix});
}