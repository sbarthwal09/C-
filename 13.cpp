#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {
    ofstream file1, file2;
    file1.open("file1.txt");
    file2.open("file2.txt");
    if (!file1.is_open() || !file2.is_open()) {
        cerr << "Error opening files for writing!" << endl;
        return 1;
    }
    file1 << "This is the content of file1.\n";
    file1 << "It contains multiple lines of text.\n";
    file2 << "This is the content of file2.\n";
    file2 << "It also contains multiple lines of text.\n";
    file1.close();
    file2.close();
    ifstream file1_read, file2_read;
    file1_read.open("file1.txt");
    file2_read.open("file2.txt");
    if (!file1_read.is_open() || !file2_read.is_open()) {
        cerr << "Error opening files for reading!" << endl;
        return 1;
    }
    cout << "Contents of file1:" << endl;
    string line;
    while (getline(file1_read, line)) {
        cout << line << endl;
    }
    file1_read.close();
    cout << "\nContents of file2:" << endl;
    while (getline(file2_read, line)) {
        cout << line << endl;
    }
    file2_read.close();
    return 0;
}
