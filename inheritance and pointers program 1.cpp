#include <iostream>
#include <cmath>

using namespace std;

class Shape {
protected:
    double height;
    double width;

public:
    Shape() : height(0), width(0) {}

    void setDimensions() {
        cout << "Enter height: ";
        cin >> height;
        cout << "Enter width: ";
        cin >> width;
    }

    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;
};

class Rectangle : public Shape {
public:
    double calculateArea() override {
        return height * width;
    }

    double calculatePerimeter() override {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    double calculateArea() override {
        return 0.5 * height * width;
    }

    double calculatePerimeter() override {
        // Assuming it's a right-angled triangle
        return height + width + sqrt(height * height + width * width);
    }
};

int main() {
    Rectangle rectangle;
    cout << "Enter dimensions for Rectangle:" << endl;
    rectangle.setDimensions();

    Triangle triangle;
    cout << "Enter dimensions for Triangle:" << endl;
    triangle.setDimensions();

    cout << "\nCalculating and displaying results:" << endl;

    cout << "Rectangle Area: " << rectangle.calculateArea() << endl;
    cout << "Rectangle Perimeter: " << rectangle.calculatePerimeter() << endl;

    cout << "Triangle Area: " << triangle.calculateArea() << endl;
    cout << "Triangle Perimeter: " << triangle.calculatePerimeter() << endl;

    return 0;
}

