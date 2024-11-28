#include <iostream> 
using namespace std;
// Inline function to double a number 
inline int doubleNumber(int x) { 
return x * 2; 
} 
// Function with default arguments to add numbers 
int addNumbers(int a, int b = 10) { 
return a + b; 
}
// Recursive function to calculate factorial 
int factorial (int n) {
if (n <= 1) return 1; // Base case 
return n * factorial(n - 1); // Recursive call 
} 
int main() { 
// Using inline function 
cout << "Double of 5 is: " << doubleNumber(5) << endl; 
// Using function with default arguments 
cout << "Adding 5 and default 10: " << addNumbers(5) << endl; 
cout << "Adding 7 and 3: " << addNumbers(7, 3) << endl; 
// Using recursive function 
cout << "Factorial of 4 is: " << factorial(4) << endl; 
return 0;
}
