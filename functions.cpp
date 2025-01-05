#include<iostream>  
using namespace std;    
int factorial(int); // prototype
int main()  
{  
int fact,value;  
cout<<"Enter any number: ";  
cin>>value;  
fact=factorial(value); //function call 
cout<<"Factorial of a number is: "<<fact<<endl;  
return 0;  
}  
int factorial(int n)  //definition
{  
if(n<0)  
return(-1); /*Wrong value*/    
if(n==0)  
return(1);  /*Terminating condition*/  
else  
{  
return(n*factorial(n-1));      
}  
} 