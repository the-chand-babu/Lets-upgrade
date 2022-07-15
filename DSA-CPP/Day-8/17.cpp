#include<iostream>
using namespace std;

int main (){
    int row,col,n;

    cout<<endl<<"enter a numver here : ";
    cin>>n;

    row=1;
    char cha='A'+1-1;
    while(row<=n){

        col=1;
        while (col<=n)
        {
            cout<<cha<<" ";
            cha++;
            col++;
        }
        cout<<endl;
        row++;
        
    }
    return 0;
}