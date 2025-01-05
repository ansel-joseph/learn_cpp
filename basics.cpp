#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, reverse = 0, digit;
    
    cout << "Enter a number: ";
    cin >> n;
    
    int original = n; 
    
    do {
        digit = n % 10;  
        sum += digit;    
        reverse = reverse * 10 + digit;  
        n /= 10;         
    } while (n > 0);  
    
    cout << "Sum of digits of " << original << " is " << sum << endl;
    cout << "Reverse of " << original << " is " << reverse << endl;
    
    return 0;
}
