// Ramesh’s basic salary is input through the keyboard. His
// dearness allowance is 40% of basic salary, and house rent
// allowance is 20% of basic salary. Write a program to calculate
// his gross salary.



#include<iostream>
using namespace std;

int main(){
    float bs,DA,HR,gr;
    cout<<endl<<"enter here basic salary : ";
    cin>>bs;
    DA=(float)40/100*bs;
    HR=(float)30/100*bs;
    gr=bs+DA+HR;

    cout<<endl<<"the gross salary of imployee "<<gr;
    return 0;

}