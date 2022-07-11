// If the ages of Ram, Shyam and Ajay are input through the
// keyboard, write a program to determine the youngest of the
// // three.

#include<iostream>
using namespace std;

int main(){
    int ram,shyam,ajay;

    cout<<endl<<"enter a ram age : ";

    cin>>ram;

    cout<<endl<<"enter a shyam age : ";

    cin>>shyam;

    cout<<endl<<"enter a ajay age : ";

    cin>>ajay;

    if(ram<shyam&&ram<ajay){
        cout<<endl<<"ram is youngest";
    } else if (shyam<ram&&shyam<ajay){
        cout<<endl<<"shyam is youngest";
    }else if (ajay<ram&&ajay<shyam){
        cout<<endl<<"ajay is youngest";

    }
    
    return 0;

    

}