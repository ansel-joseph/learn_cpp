#include <iostream>
using namespace std;

// Function declaration
void greet(); // Tells the compiler that this function exists

int main() {
    greet(); // Calling the function
    return 0;
}

// Function definition
void greet() {
    cout << "Hello, world!" << endl;
}