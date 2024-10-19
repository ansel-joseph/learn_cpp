#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the marks";
 int a,b;
 cin>>a>>b;
 int grade;
 cin>>grade;
 switch(grade){
    case 10:
    cout<<"Grade is A";
    break;
    case 9:
    cout<<"Grade is A"; 
    break;
    case 8:
    cout<<"Grade is B";
    break;
    case 7:
    cout<<"Grade is C";
    break;
    case 6:
    cout<<"Grade is D";
    break;
    default:
    cout<<"Grade is F";
 }
return 0;
}