#include<iostream>
using namespace std;
int main(){
int rows, cols, matrix[50][50], transpose[50][50];
cout<<"Enter the rows and columns: ";
cin>>rows>>cols;

cout<<"Enter the elements of the matrix: ";
for(int i=0; i<rows; i++){
  for(int j=0; j<cols; j++){
    cin>>matrix[i][j];
  }
}

for(int i=0; i<rows; i++){
  for(int j=0; j<cols; j++){
    transpose[j][i]=matrix[i][j];
  }
}
cout<<"Transpose Matrix: "<<endl;
for(int i=0; i<cols; i++){
  for(int j=0; j<rows; j++){
    cout<<transpose[i][j]<<" ";
  }
  cout<<endl;
}

return 0;
}
