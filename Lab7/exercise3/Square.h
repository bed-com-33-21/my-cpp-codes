#pragma once

namespace shapes {
    class Square {
    private:
        float sideLength;

    public:
        Square();
        Square(float length);
        ~Square();

        void setSideLength(float length);
        float getSideLength();

        friend class Area;
    };
}

