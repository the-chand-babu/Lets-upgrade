// The length & breadth of a rectangle and radius of a circle are
// input through the keyboard. Write a program to calculate the
// area & perimeter of the rectangle, and the area &
// circumference of the circle.

#include<iostream>

using namespace std;

int main(){
    int l,w,per,cir;

    cout<<endl<<"enter here a length : ";
    cin>>l;

    cout<<endl<<"enter here a width : ";
    cin>>w;

    per=l*w;
    cir=2*(l+w);
    cout<<endl<<"this is a perimeter = "<<per;
    cout<<endl<<"this is a circusmate = "<<cir;
    return 0;

}