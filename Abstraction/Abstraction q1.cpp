#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Abstract class
class Shape {
protected:
    string name;
public:
    Shape(string name) {
        this->name = name;
    }

    virtual float calculateArea() = 0;
    string getName() {
        return name;
    }
};

// Circle class
class Circle : public Shape {
private:
    int radius;
public:
    Circle(string name, int radius) : Shape(name) {
        this->radius = radius;
    }

    float calculateArea() override {
        return 3.14f * radius * radius;
    }
};

// Square class
class Square : public Shape {
private:
    int side;
public:
    Square(string name, int side) : Shape(name) {
        this->side = side;
    }

    float calculateArea() override {
        return side * side;
    }
};

// Rectangle class
class Rectangle : public Shape {
private:
    int length, breadth;
public:
    Rectangle(string name, int length, int breadth) : Shape(name) {
        this->length = length;
        this->breadth = breadth;
    }

    float calculateArea() override {
        return length * breadth;
    }
};

int main() {
    string shapeType;
    
    // Print shape options as per test case expectation
    cout << "Circle" << endl;
    cout << "Square" << endl;
    cout << "Rectangle" << endl;

    // Get shape name
    cout << "Enter the shape name" << endl;
    getline(cin, shapeType);

    cout << fixed << setprecision(2);

    if (shapeType == "Circle") {
        int radius;
        cout << "Enter the radius" << endl;
        cin >> radius;
        Circle c(shapeType, radius);
        cout << "Area of " << shapeType << " is " << c.calculateArea() << endl;

    } else if (shapeType == "Square") {
        int side;
        cout << "Enter the side" << endl;
        cin >> side;
        Square s(shapeType, side);
        cout << "Area of " << shapeType << " is " << s.calculateArea() << endl;

    } else if (shapeType == "Rectangle") {
        int length, breadth;
        cout << "Enter the length" << endl;
        cin >> length;
        cout << "Enter the breadth" << endl;
        cin >> breadth;
        Rectangle r(shapeType, length, breadth);
        cout << "Area of " << shapeType << " is " << r.calculateArea() << endl;

    } else {
        cout << "Invalid shape type" << endl;
    }

    return 0;
}