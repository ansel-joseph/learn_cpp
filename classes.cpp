#include <iostream>
using namespace std;
class Rectangle{
    private:
    int l;
    int b;
    int calculateArea(){
        return l*b;
    }
    public:
    void getValue(int a, int w){
        l=a;
        b=w;
    }
    void display(){
        cout<<"Length: "<<l<<endl;
        cout<<"Breadth: "<<b<<endl;
        cout<<"Area: "<<calculateArea()<<endl;
    }
};
    int main(){
        Rectangle r;
        int l,b;
        cout<<"Enter the length: ";
        cin>>l;
        cout<<"Enter the breadth: ";
        cin>>b;
        r.getValue(l,b);
        r.display();
        return 0;
    }
