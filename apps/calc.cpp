#include <iostream>
using namespace std;

class Armstrong{
    private: 
    int n, original, sum=0;
    public:
    void display(){
        cout<<"Enter an armstrong number: ";
        cin>>n;
    }
    void calculate(){
        original=n;
    while (n>0)
    {
        int digit=n%10;
        sum+=digit*digit*digit;
        n/=10;
        
    }
    if(original==sum){
        cout<<original<<" is an armstrong number";
    }else{
        cout<<"It is not an armstrong number";
    }
    }
};
int main() {
    Armstrong a;
    a.display();
    a.calculate();
    
    

    return 0;
}
