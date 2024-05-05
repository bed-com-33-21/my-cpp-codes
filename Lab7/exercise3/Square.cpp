#include "Square.h"

namespace shapes {
    Square::Square() {
        sideLength = 0.0;
    }

    Square::Square(float length) {
        sideLength = length;
    }

    Square::~Square() {
        // Destructor does nothing for now
    }

    void Square::setSideLength(float length) {
        sideLength = length;
    }

    float Square::getSideLength() {
        return sideLength;
    }
}