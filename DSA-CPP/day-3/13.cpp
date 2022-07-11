// Given three points (x1, y1), (x2, y2) and (x3, y3), write a
// program to check if all the three points fall on one straight line.


#include<iostream>
using namespace std;

int main(){
    float x1,x2,x3,y1,y2,y3,m,n;

    cout<<endl<<"type here first x1 : ";
    cin>>x1;

    cout<<endl<<"type here first y1 : ";
    cin>>y1;

    cout<<endl<<"type here first x2 : ";
    cin>>x2;

    cout<<endl<<"type here first y2 : ";
    cin>>y2;

    cout<<endl<<"type here first x3 : ";
    cin>>x3;

    cout<<endl<<"type here first y3 : ";
    cin>>y3;
    
    m=(y2-y1)/(x2-x1);
    n=(y3-y2)/(x3-x2);
    if(m==n){
        cout<<endl<<"All point are in same line";
    }
    else{
        cout<<endl<<"all point are not in same line";

    }
cout<<endl<<m;
cout<<endl<<n;
return 0;

}