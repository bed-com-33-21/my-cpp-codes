#pragma once

namespace shapes {
    class Circle {
    private:
        float radius;

    public:
        Circle();
        Circle(float radius);
        ~Circle();

        void setRadius(float radius);
        float getRadius();

        friend class Area;
    };
}
