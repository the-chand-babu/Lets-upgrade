
#include<iostream>
using namespace std;

int main (){

    int row,col,n;
    cout<<"enter a number"<<endl;
    cin>>n;

    row =1;

    while (row<=n){

        col=1;
        while(col<=n){
            cout<<col<<" ";
            col++;
        }
        cout<<endl;
        row++;

    }
    return 0;
}