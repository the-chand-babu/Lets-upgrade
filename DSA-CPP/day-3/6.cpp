// // Any year is input through the keyboard. Write a program to
// determine whether the year is a leap year or not.
// (Hint: Use the % (modulus) operator)


#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<endl<<"enter a year : ";
    cin>>a;
    if(a%4==0&&a%100!=0){
    cout<<endl<<a<<" is leap year ";
    }else if (a%400==0) {
        cout<<a<<" is leap year";

    }else {
        cout<<"it is not leap year";
    }
    return 0;
}