#include "Area.h"
#include <cmath>

namespace shapes {
    float Area::calculateArea(const Square& square) {
        float sideLength = square.sideLength;
        return sideLength * sideLength;
    }

    float Area::calculateArea(const Triangle& triangle) {
        float base = triangle.base;
        float height = triangle.height;
        return (base * height) / 2.0;
    }

    float Area::calculateArea(const Circle& circle) {
        float radius = circle.radius;
        return 3.14159 * radius * radius;
    }
}