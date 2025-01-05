#include <iostream>
using namespace std;

int main() {
    int size, target, f = 0;  

    cout << "Enter the number of elements in the array: ";
    cin >> size;
    
    int arr[size];  

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to search for: ";
    cin >> target;

    // Linear search
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            cout << "Element " << target << " found at index " << i << endl;
            f = 1;  
            break;  
        }
    }

    if (f == 0) {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}
