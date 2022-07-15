#include<iostream>
using namespace std;

int main (){
    int row,col,value,n;

    cout<<endl<<"enter a numver here : ";
    cin>>n;
row=1;
    while (row<=n)
    {
    col=1;
    value =row;
    while (col<=row)
    {
        cout<<value<<" ";
        value--;
        col++;

    }
    cout<<endl;
    row++;

    
    }
    return 0;
    
}