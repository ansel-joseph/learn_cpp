#include <iostream>
using namespace std;
int main()
{
    cout<<"Enter the age";
    int age;
    cin>>age;
    if(age>=18){
        cout<<"Eligible to vote";
    }else{
        cout<<"Not eligible to vote";
    }

    return 0;
}