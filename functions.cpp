#include <iostream>
using namespace std;

int main() {

    int* age = new int;

    cout << "Enter the student's age: ";
    cin >> *age;

    cout << "The student's age is: " << *age << endl;

    delete age;

    return 0;
}
