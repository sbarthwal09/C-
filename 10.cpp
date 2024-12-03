#include <iostream>

using namespace std;

class Shape {
public:
    void area(int side) {
        cout << "Area of Square: " << side * side << endl;
    }
    void area(int length, int breadth) {
        cout << "Area of Rectangle: " << length * breadth << endl;
    }
    virtual void display() {
        cout << "This is a shape." << endl;
    }
};
class Circle : public Shape {
public:
    void display() override {
        cout << "This is a circle." << endl;
    }
    void area(double radius) {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};
int main() {
    Shape shape;
    shape.area(4); 
    shape.area(5, 6);
    Circle circle;
    shape.display();
    circle.display();
    circle.area(3.5);  
    return 0;
}