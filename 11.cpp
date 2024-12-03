#include <iostream>

using namespace std;

class Complex {
private:
    float real; 
    float imag; 
public:
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex& other) {
        return Complex(real + other.real, imag + other.imag);
    }
    void display() const {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1(3.4, 5.6);
    Complex c2(1.2, 3.8);
    Complex c3 = c1 + c2;
    cout << "Complex number 1: ";
    c1.display();
    cout << "Complex number 2: ";
    c2.display();
    cout << "Sum of Complex numbers: ";
    c3.display();
    return 0;
}