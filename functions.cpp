#include <iostream>
using namespace std;

struct Book{
    char title[50];
    float price;
    int year;
};
int main(){
    Book b1;
 cout<<"Enter the book name: ";
 cin>>b1.title;
 cout<<"Enter the Price of the book: ";
 cin>>b1.price;
 cout<<"Enter the Publication Year: ";
 cin>>b1.year;

 cout<<"Book Information: "<<endl;
 cout<<"Name of the Book: "<<b1.title<<endl;
 cout<<"Price of the Book: "<<b1.price<<endl;
 cout<<"Publication Year: "<<b1.year<<endl;

    return 0;
}
