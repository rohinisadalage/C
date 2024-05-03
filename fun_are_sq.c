#include <iostream>

void printSquareArea(int side) {
    int area = side * side;
    std::cout << "Area of the square with side length " << side << " is: " << area << std::endl;
}

int main() {
    int sideLength = 5; // You can set the side length here
    printSquareArea(sideLength);
    return 0;
}
