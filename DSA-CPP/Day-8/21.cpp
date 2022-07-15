#include<iostream>
using namespace std;

int main (){
    int row,col,n;

    cout<<endl<<"enter a number here : ";
    cin>>n;

    row=1;
    while(row<=n){
        col=1;
char cha='A'+n-row;
        while(col <=row){
            
            cout<<cha<<" ";
            cha++;
            col++;
        }
        cout<<endl;
        row++;
    }
}