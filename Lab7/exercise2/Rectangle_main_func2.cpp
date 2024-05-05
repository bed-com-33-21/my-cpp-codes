#include <iostream>
#include "Rectangle.h"

int main() {
    float length, width;

    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> width;

    Rectangle rectangle1;
    rectangle1.setLength(length);
    rectangle1.setWidth(width);

    float area1 = rectangle1.calculateArea();

    std::cout << "The area of the first rectangle is: " << area1 << std::endl;

    std::cout << "Enter the length of the second rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width;

    Rectangle rectangle2(length, width);

    float area2 = rectangle2.calculateArea();

    std::cout << "The area of the second rectangle is: " << area2 << std::endl;

    return 0;
}