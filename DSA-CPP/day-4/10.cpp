// If the total selling price of 15 items and the total profit earned
// on them is input through the keyboard, write a program to
// find the cost price of one item.

#include<iostream>
using namespace std;

int main(){
    float fIS,tpro,cost,oneitem,oeicost;
    cout<<endl<<"enter here fifteen item selling price : ";
    cin>>fIS;
    cout<<endl<<"enter here profit : ";
    cin>>tpro;
    oneitem=fIS/15;
    cost=fIS-tpro;
    oeicost=cost/15;
    cout<<endl<<"this is one itme cost = "<<oeicost;
    

}