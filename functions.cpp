#include <iostream>
using namespace std;


void fightPain(int remainingPains) {

    if (remainingPains == 0) {
        cout << "Naruto defeats Nagato!" << endl;
        return;
    }
    
    cout << "Naruto fights Pain number " << remainingPains << endl;

    fightPain(remainingPains - 1);
}

int main() {
    int totalPains = 6;  
    
    cout << "Naruto begins his mission to fight the Pains!" << endl;
    fightPain(totalPains);
    
    return 0;
}
