#include<iostream>
using namespace std;

int main (){
    int row,col,n;
    cout<<endl<<"enter a number : ";
    cin>>n;

    row=n;
    while (row>=1)
    {
        col=1;
        while (col<=row)
        {
            cout<<col<<" ";
            col++;
        }
        col=n;
        while (col>=row)
        {
            cout<<" *  ";
            col--;
        }
        col=1;
        while(col<=row){
            cout<<row-col+1<<" ";
            col++;
        }
        
        cout<<endl;
        row--;
        
    }
    
}