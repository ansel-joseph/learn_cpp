#include <iostream>
using namespace std;

int main() {
    int a,b,c,result;
    cout<<"Enter 3 numbers: ";
    cin>>a>>b>>c;
    result=(a>b&&a>c)? a:((b>c&&b>a)?b:c);
    cout<<"The largerst number: "<<result;
    return 0;
}