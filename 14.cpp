#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file1("file1.txt");
    if (!file1.is_open()) {
        cerr << "Error: Unable to open file1.txt" << endl;
        return 1;
    }
    ifstream file2("file2.txt");
    if (!file2.is_open()) {
        cerr << "Error: Unable to open file2.txt" << endl;
        file1.close();
        return 1;
    }
    cout << "Reading from two files simultaneously:" << endl;
    string line1, line2;
    while (true) {
        if (getline(file1, line1)) {
            cout << "File1: " << line1 << endl;
        }
        if (getline(file2, line2)) {
            cout << "File2: " << line2 << endl;
        }
        if (file1.eof() && file2.eof()) {
            break;
        }
    }
    file1.close();
    file2.close();
    return 0;
}
