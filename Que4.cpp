// Write a function to count the number of digits in a number and then print the square of this number.
#include <iostream>
using namespace std;
void count_squre(int a){
    int count=0;
    int n=a;
    while(a>0){
        a=a/10;
        count++;
    }
    cout<<"Count of the number "<<count<<endl;
    cout<<"Square of the number "<<n*n;
    
}
int main(){
    int a,b;
    cout<<"Enter a :";
    cin>>a;
    count_squre(a);
    
}