#include<iostream>
using namespace std;

int main (){

    int row,col,n,sp=0,j;

    cout<<endl<<"enter a numver : ";
    cin>>n;
row=1;
    while (row<=n){
        sp=n-row+1;
        j=1;
        while (j<=sp)
        {
            cout<<"  ";
            j++;
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
    
        
    }
    
