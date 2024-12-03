#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Enter a number (1 for division by zero, 2 for invalid index access, or any other number for no exception): ";
        cin >> choice;

        if (choice == 1) {
            int a, b;
            cout << "Enter two integers (second integer should be zero to trigger the exception): ";
            cin >> a >> b;
            if (b == 0) {
                throw "Division by zero error!";
            } else {
                cout << "Result of division: " << a / b << endl;
            }
        } else if (choice == 2) {
            int index;
            cout << "Enter an index (valid indices are 0 to 4): ";
            cin >> index;
            int arr[5] = {10, 20, 30, 40, 50}; // Fixed the syntax error here (replaced ')' with '}')
            if (index < 0 || index >= 5) {
                throw out_of_range("Index out of bounds error!");
            } else {
                cout << "Value at index " << index << " is " << arr[index] << endl;
            }
        } else {
            cout << "No exception occurred!" << endl;
        }
    } catch (const char* msg) {
        cout << "Caught an exception: " << msg << endl;
    } catch (const out_of_range& e) {
        cout << "Caught an exception: " << e.what() << endl;
    } catch (...) {
        cout << "Caught an unknown exception!" << endl;
    }

    return 0;
}