#include <iostream>
using namespace std;

int sumDigits(int a) {
    
    if (a == 0) {
        return 0;
    }
    return (a % 10) + sumDigits(a / 10);
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;

    int result = sumDigits(x);

    cout << "The sum of digits is " << result << endl;

    return 0;
}