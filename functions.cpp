#include<iostream>
using namespace std;
void firstNumber(int a){
    a=5;
cout<<"The first number is "<<a;
}
int main(){
    int num1=6;
    cout<<"The second number is "<<num1<<endl;
    firstNumber(num1);
    return 0;
}