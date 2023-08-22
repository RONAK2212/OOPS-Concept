#include <iostream>

class Rectangle {
private:
    double length;
    double breadth;

public:
    Rectangle(double len, double b) : length(len), breadth(b) {}

    double calculateArea() {
        return length * breadth;
    }
};

int main() {
    double length, breadth;
    
    std::cout << "Enter length of rectangle: ";
    std::cin >> length;

    std::cout << "Enter breadth of rectangle: ";
    std::cin >> breadth;

    Rectangle rect(length, breadth);
    double area = rect.calculateArea();

    std::cout << "Area of rectangle: " << area << std::endl;

    return 0;
}

