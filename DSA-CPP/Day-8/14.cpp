#include<iostream>
 using namespace std;

 int main (){

    int row,col,n;

cout<<endl<<"enter a numver here : ";
cin>>n;

row=1;
while(row <= n){
    col=1;
    
    while (col<=n)
    {
        char cha='A'+row-1;
        cout<<cha<<" ";
        col++;
    }
    cout<<endl;
    row++;
    
}
 }