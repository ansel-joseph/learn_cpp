#include <iostream>
using namespace std;
int main()
{
    int marks;
    cout << "Enter the marks of the student: ";
    cin >> marks;

    if (marks > 100 || marks < 0)
    {
        cout << "Invalid";
    }
    else if (marks >= 90)
    {
        cout << "Grade is A";
    }
    else if (marks >= 80)
    {
        cout << "Grade is B";
    }
    else if (marks >= 70)
    {
        cout << "Grade is C";
    }
    else if (marks >= 60)
    {
        cout << "Grade is D";
    }
    else
    {
        cout << "Grade is F";
    }
    return 0;
}