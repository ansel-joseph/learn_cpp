#include <iostream>
using namespace std;
int main()
{
    cout << "Enter two numbers";
    int a, b;
    cin >> a >> b;
    char operation;
    cout << "Enter the operation";
    cin >> operation;
    switch (operation)
    {
    case ('+'):
        cout << a + b;
        break;
    case ('-'):
        cout << a - b;
        break;
    case ('*'):
        cout << a * b;
        break;
    case ('/'):
        cout << a / b;
        break;
    default:
        cout << "Invalid";
    }
    return 0;
}