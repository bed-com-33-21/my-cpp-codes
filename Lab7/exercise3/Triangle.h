#pragma once

namespace shapes {
    class Triangle {
    private:
        float base;
        float height;

    public:
        Triangle();
        Triangle(float base, float height);
        ~Triangle();

        void setBase(float base);
        void setHeight(float height);

        float getBase();
        float getHeight();

        friend class Area;
    };
}

