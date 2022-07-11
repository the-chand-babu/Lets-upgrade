// //Given the length and breadth of a rectangle, write a program to
// find whether the area of the rectangle is greater than its
// perimeter. For example, the area of the rectangle with length = 5
// and breadth = 4 is greater than its perimeter.


#include<iostream>
using namespace std;

int main(){
    int length,width,rectangle,perimeter;
    cout<<endl<<"enter here a length : ";
    cin>>length;

    cout<<endl<<"enter here a width : ";
    cin>>width;

rectangle=length*width;

perimeter=2*(length+width);

if(rectangle>perimeter){

    cout<<endl<<"Area of rectangle is greater "<<rectangle;

}else if(perimeter==rectangle){
    cout<<endl<<"both are equal";
}
else{
    cout<<endl<<"area of perimeter is gretaer then rectangle"<<perimeter;
}

return 0;
}