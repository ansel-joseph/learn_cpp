#include<iostream>
using namespace std;
int main(){
  cout<<"Prime numbers from 1 to 100 are :"<<endl;
  for(int i=2; i<=100; i++){
    for(int j=2; j<=i; j++){
      if(i%j==0){
        break;
      }
    }
    if(int j==i){
      cout<<i<<endl;
    }
  }
cout<<endl;
return 0;
}