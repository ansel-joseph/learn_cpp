#include <iostream>
using namespace std;

struct Movie{
    char title[50];
    char director[50];
    int releaseYear;
    float rating;
};
int main(){
    Movie m;
    cout<<"Enter the movie name: ";
    cin>>m.title;
    cout<<"Enter the name of the Director: ";
    cin>>m.director;
    cout<<"Enter the year of release: ";
    cin>>m.releaseYear;
    cout<<"Etner the Rating: ";
    cin>>m.rating;

    cout<<"\nMOVIE INFO: "<<endl;
    cout<<"Movie Name: "<<m.title<<endl;
    cout<<"Director: "<<m.director<<endl;
    cout<<"Release Year: "<<m.releaseYear<<endl;
    cout<<"Rating: "<<m.rating<<endl;
    return 0;
}