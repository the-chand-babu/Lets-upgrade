#include<iostream>
#include<iomanip>
using namespace std;


int main(){

    int row,col,sp,n;

    cout<<endl<<"enter here a numver : ";
    cin>>n;

row=1;
    while (row<=n){
        col=1;
        while (col<=row)
        {
            cout<<"  ";
            col++;
        }
        sp=n;
        
        while (sp>=row)
        {
            cout<<setw(2)<<"*";
            sp--;
        }
        
        cout<<endl;
        row++;
        
    }
}