#include <iostream>
using namespace std;

int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    int result = addNumbers(num1, num2);
    cout << "The sum is: " << result << endl;
    
    return 0;
}