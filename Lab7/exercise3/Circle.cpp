#include "Circle.h"

namespace shapes {
    Circle::Circle() {
        radius = 0.0;
    }

    Circle::Circle(float radius) {
        this->radius = radius;
    }

    Circle::~Circle() {
        // Destructor does nothing for now
    }

    void Circle::setRadius(float radius) {
        this->radius = radius;
    }

    float Circle::getRadius() {
        return radius;
    }
}