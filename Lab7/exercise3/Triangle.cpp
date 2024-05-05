#include "Triangle.h"

namespace shapes {
    Triangle::Triangle() {
        base = 0.0;
        height = 0.0;
    }

    Triangle::Triangle(float base, float height) {
        this->base = base;
        this->height = height;
    }

    Triangle::~Triangle() {
        // Destructor does nothing for now
    }

    void Triangle::setBase(float base) {
        this->base = base;
    }

    void Triangle::setHeight(float height) {
        this->height = height;
    }

    float Triangle::getBase() {
        return base;
    }

    float Triangle::getHeight() {
        return height;
    }
}