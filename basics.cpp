#include <iostream>
using namespace std;
int main()
{
    char colour;

while (true)
    {
      switch(colour);  

    cout << "Enter a colour";
    cin >> colour;

    
       
    switch (colour)
    {
       
    case 'r':
        cout << "STOP"<<endl;
        break;

    case 'y':
        cout << "WAIT"<<endl;
        break;

    case 'g':
        cout << "GO"<<endl;
        break;
        
    case 's':
        cout<<"GoodBye"<<endl;
        return 0;

    default:
        cout << "Invalid Input"<<endl;
    }

    }

        cout<<"Bye";

    return 0;
}