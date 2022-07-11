// //If cost price and selling price of an item is input through the
// keyboard, write a program to determine whether the seller has
// made profit or incurred loss. Also determine how much profit
// // he made or loss he incurred.

#include<iostream>
using namespace std;

int main (){
    int p,s;

    cout<<endl<<"enter here purchase cost : ";
    cin>>p;
    cout<<endl<<"enter here selling Pice : ";
    cin>>s;
    if(s>p){
        cout<<endl<<"he is making a profit";
    }else if (p>s){
        cout<<endl<<"he is making loss";

    }
    else if(p==s){
        cout<<"he is not making profit or loss";
    }
    return 0;

}