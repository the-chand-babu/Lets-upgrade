// // Write a program to check whether a triangle is valid or not,
// when the three angles of the triangle are entered through the
// keyboard. A triangle is valid if the sum of all the three angles
// is equal to 180 degrees.


#include<iostream>
using namespace std;

int main(){
    int a,b,c,add;
    cout<<endl<<"enter here a 1 triagngle: ";
    cin>>a;

    cout<<endl<<"enter here a 2 triangle : ";
    cin>>b;

    cout<<endl<<"enter here a 3 triangle : ";
    cin>>c;
    add=a+b+c;
    if(add==180){
        cout<<endl<<"triangle is possible ";

    }
    else {
        cout<<endl<<"triangle is not possible";
    }

}