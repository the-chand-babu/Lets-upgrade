
#include<iostream>
using namespace std;

int main (){

    int row,col,n;

    cout<<endl<<"enter a number : ";
    cin>>n;

    row=1;
    while(row<=n){

col=n;
while (col>=1)
{
    cout<<col<<" ";
    col--;
}
cout<<endl;
row++;

    }
    return 0;
}