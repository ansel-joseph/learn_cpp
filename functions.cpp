#include<iostream>
using namespace std;
int multiply(int a,int b){
    return a*b;
}
int main(){
    int num1, num2;
    cout<<"Enter 2 numbers: ";
    cin>>num1>>num2; 

int result= multiply(num1, num2);
cout<<"Multiplication= "<<result;
return 0;
}