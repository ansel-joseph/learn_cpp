#include <iostream>
using namespace std;

inline int numberAverage(int num1, int num2, int num3){
    return (num1+num2+num3)/3;
}
int main(){
    int a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cout<<"The average is: "<<numberAverage(a,b,c);
    return 0;
}
