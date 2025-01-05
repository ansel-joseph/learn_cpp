#include<iostream>
using namespace std;

void fibonacciSeries(int *m, int *n) {
    int a = 0, b = 1, next = 0;
    
    while (next <= *n) {
        if (next >= *m) {
            cout << next << " ";
        }
        a = b;
        b = next;
        next = a + b;
    }
}

int main() {
    int m, n;
    cout << "Enter the first number: ";
    cin >> m;
    cout << "Enter the last number: ";
    cin >> n;
    
    cout << "Fibonacci series between " << m << " and " << n << ": " << endl;
    fibonacciSeries(&m, &n);  // passing addresses of m and n
    
    return 0;
}
