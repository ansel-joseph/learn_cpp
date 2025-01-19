    #include <iostream>
    #include <cstdlib>
    #include <ctime>
    using namespace std;
    int main(){
    srand(time(0));
    int n=0;
    int randomNumber = rand() % 100 + 1;
    cout<<"Enter a number: ";
    cin>>n;
    while (n!=randomNumber){

        if (n>randomNumber)
        {   
            cout<<"Your guess is too high"<<endl;
            cout<<"Try again: ";
            cin>>n;
        }else if(n<randomNumber) {
            cout<<"Your guess is too low"<<endl;
            cout<<"Try again: ";
            cin>>n;
        }
    }
    cout<<"Your guess is right";

    return 0;
    }


