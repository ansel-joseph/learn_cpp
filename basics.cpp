#include <iostream>
using namespace std;

int length = 10;
int main(){
    int length, breadth, area;
    length=5;
    breadth=3;
    area=length*breadth;
    cout<<"The area of the rectangle is: "<<area<<endl;
    cout<<"The local variable length is: "<<length<<endl;
    cout<<"The global variable legth is: "<<::length;
    return 0;

}