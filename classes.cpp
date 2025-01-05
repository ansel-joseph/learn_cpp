#include <iostream>
using namespace std;

class Circle {
private:
    double radius;  // Private attribute for radius

public:
    // Default constructor
    Circle() {
        radius = 0.0;  // Initialize radius to 0
    }

    // Parameterized constructor
    Circle(double r) {
        radius = r;  // Initialize radius to the specific value
    }

    // Member function to calculate and return the area
    double calculateArea() {
        return 3.14159 * radius * radius;  // Area = πr²
    }

    // Member function to display the radius and area
    void display() {
        cout << "Radius: " << radius << endl;
        cout << "Area: " << calculateArea() << endl;
    }
};

int main() {
    // Object using default constructor
    Circle c1;
    cout << "Circle with default constructor:" << endl;
    c1.display();

    // Object using parameterized constructor
    

    Circle c2(3);
    cout << "Circle with parameterized constructor:" << endl;
    c2.display();

    return 0;
}
