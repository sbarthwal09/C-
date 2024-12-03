#include<iostream>
#include<string>
using namespace std;

class EMPLOYEE
{
    private:
    int EMPCODE;
    string EMPNAME;
    public:
    void getdata()
    {
        cout << "Enter Employee Code: ";
        cin >> EMPCODE;
        cin.ignore();
        cout << "Enter Employee Name: ";
        getline(cin, EMPNAME);
    }
    void display() const
    {
        cout << "Employee Code: " << EMPCODE << endl;
        cout << "Employee Name: " << EMPNAME << endl;       
    }
};

int main()
{
    int n;
    cout << "Enter the no of Employee: ";
    cin >> n;
    cin.ignore();
    
    EMPLOYEE* Emp = new EMPLOYEE[n];
    for (int i = 0; i < n; i++)  
    {
        cout << "\n Enter the details of employee \n" << (i+1) << ": ";
        Emp[i].getdata();
    }
    
    cout << "\n Employee details:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nEmployee " << (i+1) << ":\n";
        Emp[i].display();
    }
    
    delete[] Emp;
    return 0;
}
