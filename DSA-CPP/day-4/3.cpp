// Temperature of a city in Fahrenheit degrees is input through
// the keyboard. Write a program to convert this temperature
// into Centigrade degrees.

#include<iostream>
using namespace std;

int main(){
    float f,c;
    cout<<endl<<"enter here a foreinhiet tem : ";
    cin>>f;

    c=(float)5/9*f;
    cout<<endl<<"this is celcius = "<<c;
    return 0;
}