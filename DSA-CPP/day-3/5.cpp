// //Any integer is input through the keyboard. Write a program to
// find out whether it is an odd number or even number.

#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<endl<<"enter here no : ";
    cin>>a;
    if(a==0){
        cout<<endl<<"it is not even or not Odd no ";

    }
    else if (a%2==0){
        cout<<endl<<a<< " is a Even no ";
    }
    else {
        cout<<a<<" is not Odd no ";
    }
    return 0;


}