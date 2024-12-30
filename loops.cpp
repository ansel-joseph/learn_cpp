#include<iostream>
using namespace std;
int main(){
  int n,i;
  cout<<"Enter a number: ";
  cin>>n;
  for (int i = 2; i <= n/2; i++)
  {
    if(n%i==0){
      cout<<"The number is Not Prime";
      break;
    }else{
      cout<<"The number is Prime";
    }
  }
  return 0;
}

