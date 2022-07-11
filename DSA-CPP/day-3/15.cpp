// The distance between two cities (in km.) is input through the
// keyboard. Write a program to convert and print this distance
// in meters, feet, inches and centimeters.


#include<iostream>
using namespace std;

int main(){
    float k,m,c,f,inch;

    cout<<endl<<"enter here a k/m : ";
    cin>>k;

    m=k*1000;
    c=k*100000;
    f=k*3280.84;
    inch=k*39370.1;
    cout<<endl<<"this is meter = "<<m;

    cout<<endl<<"this is centimeter = "<<c;

    cout<<endl<<"this is foot = "<<f;

    cout<<endl<<"this is inch = "<<inch;

    return 0;

}