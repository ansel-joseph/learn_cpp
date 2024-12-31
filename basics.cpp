#include <iostream>
using namespace std;

int main() {
    int a=1, b=2;
    cout<<"Before swap: a="<<a<<" and b="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After swap: a="<<a<<" and b="<<b<<endl;
    return 0;
}