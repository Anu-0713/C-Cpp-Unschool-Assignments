//Task 2:Function overloading
#include <iostream>
#include <cmath>
double area(double radius) {
    return M_PI * radius * radius;
}
duble area(double base, double height) {
    return 0.5 * base * height;
}
double area(double length, double width) {
    return length * width;
}

int main() {
    int choice;
    std::cout << "Choose a shape to calculate its area:" << std::endl;
    std::cout << "1. Circle" << std::endl;
    std::cout << "2. Triangle" << std::endl;
    std::cout << "3. Rectangle" << std::endl;
    std::cin >> choice;

    if (choice == 1) {
        double radius;
        std::cout << "Enter the radius of the circle: ";
        std::cin >> radius;
        double result = area(radius);
        std::cout << "Area of circle is " << result << " sq. units." << std::endl;
    } else if (choice == 2) {
        double base, height;
        std::cout << "Enter the base and height of the triangle: ";
        std::cin >> base >> height;
        double result = area(base, height);
        std::cout << "Area of triangle is " << result << " sq. units." << std::endl;
    } else if (choice == 3) {
        double length, width;
        std::cout << "Enter the length and width of the rectangle: ";
        std::cin >> length >> width;
        double result = area(length, width);
        std::cout << "Area of rectangle is " << result << " sq. units." << std::endl;
    } else {
        std::cout << "Invalid choice. Please choose 1, 2, or 3." << std::endl;
    }

    return 0;
}
