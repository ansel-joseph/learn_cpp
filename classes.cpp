#include <iostream>
using namespace std;
class Car{
    private:
    int num;
    char brand[50];
    public:
    void putData(){
        cout<<"Enter the name of the car: ";
        cin>>brand;
        cout<<"Enter the number of your car: ";
        cin>>num;
    }
    void displayData(){
        cout<<"The car is a "<<brand<<endl;
        cout<<"The number of the car is: "<<num<<endl;
    }
};
int main(){
    Car car;
    car.putData();
    car.displayData();
    return 0;
}