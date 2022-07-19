#include<iostream>
using namespace std;

int main (){
    int row,col,n;

    cout<<endl<<"enter a numver here : ";
    cin>>n;

    row=n;

    while (row>=1)
    {
        col=1;
        while (col<=row)
        {
            cout<<"* ";
            col++;
        }
        cout<<endl;
        row--;
        
    }
    
    
}