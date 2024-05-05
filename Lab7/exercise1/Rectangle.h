//#ifndef RECTANGLE_H
//#define RECTANGLE_H
#pragma once

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();  // Default constructor
    ~Rectangle(); // Destructor

    void setLength(float len);
    void setWidth(float wid);

    float getLength();
    float getWidth();

    float calculateArea();
};

//#endif