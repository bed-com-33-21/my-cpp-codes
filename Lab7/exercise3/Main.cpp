#include <iostream>
#include "Area.h"
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

using namespace shapes;

int main() {
    int choice;
    float length, base, height, radius;

    while (true) {
        std::cout << "Select an option:" << std::endl;
        std::cout << "1. Calculate the area of a square" << std::endl;
        std::cout << "2. Calculate the area of a triangle" << std::endl;
        std::cout << "3. Calculate the area of a circle" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::cout << "Enter the side length of the square: ";
                std::cin >> length;

                Square square(length);

                float area = Area::calculateArea(square);

                std::cout << "The area of the square is: " << area << std::endl;
                break;
            }
            case 2: {
                std::cout << "Enter the base of the triangle: ";
                std::cin >> base;

                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;

                Triangle triangle(base, height);

                float area = Area::calculateArea(triangle);

                std::cout << "The area of the triangle is: " << area << std::endl;
                break;
            }
            case 3: {
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;

                Circle circle(radius);

                float area = Area::calculateArea(circle);

                std::cout << "The area of the circle is: " << area << std::endl;
                break;
            }
            case 4:
                exit(0);
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
           
    return 0;
}