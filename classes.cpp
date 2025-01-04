#include <iostream>
using namespace std;
class Student{
    private:
    char name[100];
    int rollNo;
    int year;
    char programme [100];
    public:
    void putData(){
        cout<<"Enter the name of the student: ";
        cin>>name;
        cout<<"Enter the Roll Number: ";
        cin>>rollNo;
        cout<<"Enter the year of joining: ";
        cin>>year;
        cout<<"Enter the programme taken";
        cin>>programme;
    }
    void displayData(){
        cout<<"---STUDENT INFORMATION---"<<endl;
        cout<<"Name           : "<<name<<endl;
        cout<<"Roll Number    : "<<rollNo<<endl;
        cout<<"Year of joining: "<<year<<endl;
        cout<<"Programme taken: "<<programme<<endl;

    }

};

int main(){
    Student s;
    s.putData();
    s.displayData();
    return 0;
}