// Write a function that takes the radius of a circle as an argument and returns its area.
#include <iostream>
using namespace std;
int area(int r){
    int temp = 3.14*r*r; 
    return temp;   
}
int main(){
    int r;
    cout<<"Enter radis of circle :";
    cin>>r;
    cout<<"Area of circle : "<<area(r);
}