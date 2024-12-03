#include <iostream>
using namespace std;

class NumClass {
private:
    static int objcount; 
public:
    NumClass() {
        objcount++; 
    }

    static int getObjCount() {
        return objcount; 
    }
};

int NumClass::objcount = 0; 

int main() {
    NumClass obj1;
    NumClass obj2;
    NumClass obj3;
    NumClass obj4;

    cout << "Number of objects created: " << NumClass::getObjCount() << endl;

    return 0;
}
