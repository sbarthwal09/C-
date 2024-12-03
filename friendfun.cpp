#include<iostream>
using namespace std;
class B;
class A;
{
    int x;
    public:
    void setdata(int i)
    {
        x = 1;
    }
    friend class B;
    friend void nim(A,B);
};
class B
{
    int y;
    public:
    void setdata(int i);
    {
        y=1;
    }
    void showdata(A&, a)
    {
        cout<<"Value of x from class A: "<<a.x/n;
        friend
    }
}