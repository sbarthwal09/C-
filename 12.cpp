#include <iostream>
using namespace std;
class Distance {
private:
    int feet;
    int inches;
public:
    Distance() : feet(0), inches(0) {}
    void inputDistance() {
        cout << "Enter distance in feet: ";
        cin >> feet;
        cout << "Enter distance in inches: ";
        cin >> inches;
        if (inches >= 12) {
            feet += inches / 12;
            inches %= 12;
        }
    }
    void outputDistance() const {
        cout << "Distance: " << feet << " feet and " << inches << " inches" << endl;
    }
};
int main() {
    Distance d;
    d.inputDistance();
    d.outputDistance();
    return 0;
}
