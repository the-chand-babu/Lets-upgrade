// Write a program to find the factorial value of any number
// entered through the keyboard.

#include<iostream>
using namespace std;

int main(){
    int num,fac=1,i;
    cout<<endl<<"enter a number : ";
    cin>>num;

    for(i=num;i>0;i--){
        fac=fac*i;
    }
    cout<<endl<<"this is factorial = "<<fac;

}