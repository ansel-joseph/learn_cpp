#include <iostream>
using namespace std;
int main()
{
    char colour;
    cout << "Enter a colour";
    cin >> colour;

    switch (colour)
    {

    case 'r':
        cout << "STOP";
        break;

    case 'y':
        cout << "WAIT";
        break;

    case 'g':
        cout << "GO";
        break;

    default:
        cout << "Invalid Input";
    }

    return 0;
}