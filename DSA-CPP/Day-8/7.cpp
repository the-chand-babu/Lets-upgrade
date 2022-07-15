#include<iostream>
using namespace std;

int main (){
    int row,col,count,n;

    cout<<endl<<"enter here a numver : ";
    cin>>n;
count=1;
    row=1;
    while( row <=n){

        col=1;
        while ( col<=n)
        {
            cout<<count<<" ";
            col++;
            count++;

        }
        cout<<endl;
        row++;
        
    }
    return 0;
}