#include<iostream>
using namespace std;
int main(){
  int rows,cols,matrix1[10][10],matrix2[10][10],sum[10][10];
  cout<<"Enter the number of rows: ";
  cin>>rows;
  cout<<"Enter the number of columns: ";
  cin>>cols;
  cout<<"Enter the elements of the first matrix: "<<endl;
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cin>>matrix1[i][j];
    }
  }
  cout<<"Enter the elements for the second matrix: "<<endl;
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cin>>matrix2[i][j];
    }
  }
  for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      sum[i][j]=matrix1[i][j]+matrix2[i][j];
    }
  }
    cout<<"Sum matrix: "<<endl;
    for(int i=0; i<rows; i++){
    for(int j=0; j<cols; j++){
      cout<<sum[i][j]<<" ";
    }
    cout<<endl;
  }
  return 0;
}