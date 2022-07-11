// Two numbers are input through the keyboard into two
// locations C and D. Write a program to interchange the
// contents of C and D.

#include<iostream>
using namespace std;

int main(){
    int c,d,f;
    cout<<endl<<"enter her c : ";
    cin>>c;

    cout<<endl<<"enter here d : ";
    cin>>d;

    f=c;
    c=d;
    d=f;
    cout<<endl<<"thhis is c = "<<c;
    cout<<endl<<"this is d = "<<d;
    return 0;
}