// Copyright 2024 Mikhail Ibrahim
// This program calculates and prints the area and perimeter of a rectangle.

#include <iostream>

int main() {
    double length = 5.0;
    double width = 3.0;

    double area = length * width;
    double perimeter = 2 * (length + width);

    std::cout << "For a rectangle with length " << length
              << "cm and width " << width << "cm." << std::endl;
    std::cout << "The area is " << area << " cm²." << std::endl;
    std::cout << "The perimeter is " << perimeter << " cm." << std::endl;

    return 0;
}
