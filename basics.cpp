#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 1) {
        cout << "It is not a prime number";
    } else {
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                cout << "It is not a prime number";
                return 0; 
            }
        }
        cout << "It is a prime number"; 
    }

    return 0;
}