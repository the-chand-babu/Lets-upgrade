#include<iostream>
 using namespace std;

 int main (){
    int row,col,n;

    cout<<endl<<"enter here a number : ";
    cin>>n;

    row =1;

    while (row<=n)
    {
        col=1;

        while (col <= n){
             char cha='A'+row+col-2;
             cout<<cha<<" ";
             col++;
        }
cout<<endl;
row++;
    }
    return 0;
    
 }