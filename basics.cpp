#include <iostream>
using namespace std;

int main() {
    int n = 5; // Total number of rows

    // Outer loop for the number of rows
    for (int i = 1; i <= n; i++) {
        // Loop for printing spaces before numbers
        for (int j = 1; j <= n - i; j++) {
            cout << " "; // Print spaces
        }

        // Loop for printing the increasing numbers
        for (int j = 1; j <= i; j++) {
            cout << j << " "; // Print increasing numbers
        }

        // Loop for printing the decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j << " "; // Print decreasing numbers
        }

        // Move to the next line after finishing the current row
        cout << endl;
    }

    return 0;
}
