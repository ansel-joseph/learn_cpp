    #include<iostream>
    using namespace std;
    int main(){
      int n;
      int sum=0;
      cout<<"Enter a number: ";
      cin>>n;
      for(int i=1; i<=n; i++){
        sum+=i;
      }
      cout<<"The sum of the first "<<n<<" numbers is: "<<sum;
        return 0;
    }
