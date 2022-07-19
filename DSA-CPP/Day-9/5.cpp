#include<iostream>
using namespace std;

int main (){
    int row,col,n;
    cout<<endl<<"enter a number here : ";
    cin>>n;

    row=1;
    while(row<=n){
        col=1;
        while (col<=row)
        {
            cout<<" *";
            col++;
        }
        col=1;
        int sp=n-row+1;
        while (col<=sp)
        {
            cout<<" -  ";
            col++;
        }
        col=1;
        while (col<=row)
        {
            cout<<"* ";
            col++;
        }
        cout<<endl;
        
        row++;
        
        
        
    }
    row=1;
    while (row<=n)
    {
        col=1;
        int c=n-row+1;
        while(col<=c){
            cout<<" *";
            col++;
        }
        col=1;
        while (col<=row)
        {
            cout<<" -  ";
            col++;
            
        }
        col=1;
         c=n-row+1;
        while (col<=c)
        {
            cout<<"* ";
            col++;
        }
        
        
        cout<<endl;
        row++;
    }
    
    return 0;
}