#include <iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"The array in first position is: "<<arr[0]<<endl;
    arr[0]=6;
    cout<<"After modification, array in the first position is: "<<arr[0]<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Array is: "<<arr[i];
        cout<<endl;
    }

    return 0;
}