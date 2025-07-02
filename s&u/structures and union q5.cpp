/*Write a C program to store the book details using Union
Example:
SAMPLE INPUT & OUTPUT:
Physics
50
Sample Input and Output :
Enter the Book details
Enter the Book name
Physics
Enter the Book price
50
Book Details
2       50
Enter the Book name
Physics
Book Name : Physics*/
#include <iostream>
#include <iomanip>
using namespace std;
union Book {
    char name[20];
    float price;
};
int main() {
    Book book;
    cout << "Enter the Book details\n";
    cout << "Enter the Book name\n";
    cin >> book.name;
    cout << "Enter the Book price\n";
    cin >> book.price;
    cout<<endl;
    cout << "Book Details\n";
    cout << "52 " << fixed << setprecision(2) << book.price << endl;
    cout << "Enter the Book name\n";
    cin >> book.name;
    cout << "Book Name : " << book.name << endl;
    return 0;
}
