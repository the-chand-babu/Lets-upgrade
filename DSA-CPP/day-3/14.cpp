// Given a point (x, y), write a program to find out if it lies on the
// x-axis, y-axis or at the origin, viz. (0, 0).

#include<iostream>
using namespace std;

int main(){
    float x,y;
    cout<<endl<<"enter a x : ";
    cin>>x;

    cout<<endl<<"enter a y : ";
    cin>>y;


    if(x==0&&y>0){
        cout<<endl<<"it is lies to y";
    }else if(x>0&&y==0){
        cout<<endl<<"it is lies to x";
    }else if (x==0&&y==0){
cout<<endl<<"origin";
    }else if (x<0&&y==0){
        cout<<endl<<"it is -x axis";
    }
    else if(x==0&&y<0){
        cout<<endl<<"it is going to -y axis";

    }else if (x>0&&y>0){
        cout<<endl<<"it will go both x , y";
    }else if(x<0&&y<0){
        cout<<endl<<"it is going both";
    }else if (x<0&&y>0){
        cout<<endl<<"it will go both";
    }else if (x>0&&y<0){
        cout<<endl<<"it will go both";
        
    }

    return 0;
}