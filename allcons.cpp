#include<iostream>
#include<string>
using namespace std;

class Book
{
    private:
    string title;
    string author;
    int publication_year;

    public:
    // Default constructor
    Book()
    {
        title = "Unknown";
        author = "Unknown";
        publication_year = 0;
    }

    // Parameterized constructor with title and author
    Book(const string& a, const string& t)
    {
        title = t;
        author = a;
        publication_year = 0;
    }

    // Parameterized constructor with title, author, and publication year
    Book(const string& t, const string& a, int c)
    {
        title = t;
        author = a;
        publication_year = c;
    }

    // Display function to print book details
    void display() const
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Publication Year: " << publication_year << endl;
    }
};

int main()
{
    Book book1;
    cout << "Book Details:" << endl;
    book1.display();

    Book book2("Aman", "OOPs");
    cout << "\nBook Details:" << endl;
    book2.display();

    Book book3("OOPs", "Aman", 2024);
    cout << "\nBook Details:" << endl;
    book3.display();

    return 0;
}
