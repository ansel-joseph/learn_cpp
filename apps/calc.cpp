#include<iostream>
using namespace std;

int main() {
    int i, original, digit, sum;

    cout << "Armstrong numbers between 1 and 1000 are: " << endl;
    

    for(i = 1; i <= 1000; i++) {
        original = i;
        sum = 0;
        
        
        while (original > 0) {
            digit = original % 10;     
            sum += digit * digit * digit; 
            original /= 10;            
        }
        

        if (sum == i) {
            cout << i << " ";
        }
    }

    return 0;
}
