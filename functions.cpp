#include <iostream>
using namespace std;

inline int areaRect(int length, int breadth){
    return length*breadth;
}
int main(){
    int l,b;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;

    cout<<"Area of the rectangle is: "<<areaRect(l,b);
    return 0;
}
