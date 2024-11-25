#include<iostream>
using namespace std;

int main() {
    int x = 10; 
    int* ptr = &x;   

    cout << "Value of x: " << x << endl;   
    cout << "Address of x: " << &x << endl; 
    cout << "Value of ptr: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl; 

    return 0;
}