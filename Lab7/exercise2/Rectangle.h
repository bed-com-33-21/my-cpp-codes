
#pragma once

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();  // Default constructor
    Rectangle(float len, float wid); // Overloaded constructor
    ~Rectangle(); // Destructor

    void setLength(float len);
    void setWidth(float wid);

    float getLength();
    float getWidth();

    float calculateArea();
};
