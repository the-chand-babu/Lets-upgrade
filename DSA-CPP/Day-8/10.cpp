#include<iostream>
 using namespace std;

 int main (){
    int row,col,n,count;

    cout<<endl<<"enter a number here : ";
    cin>>n;
count=1;
    row =1;
    while (row<=n){

        col=1;
        while (col<=row){
        cout<<count<<" ";
count++;
col++;
        
        
        }
        cout<<endl;
        row++;
        
    }
    return 0;
 }