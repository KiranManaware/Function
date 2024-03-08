// Write a function to print squares of first n natural numbers, taking n as argument to the function
#include <iostream>
using namespace std;
int squre(int n){
    int temp = n*n;    
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Square of 1st "<<i<<" natural numbers is "<<squre(i)<<endl;  
    }
}