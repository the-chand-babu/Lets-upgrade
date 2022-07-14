// Two numbers are entered through the keyboard. Write a
// program to find the value of one number raised to the power
// of another.

#include<iostream>
using namespace std;

int main(){
    int a,b,power=1,i;

    cout<<endl<<"enter no a : ";
    cin>>a;

    cout<<endl<<"enter no b : ";
    cin>>b;

    for(i=1;i<=b;i++){
        power=power*a;

    }
    cout<<endl<<"this is power of a : "<<power;



}