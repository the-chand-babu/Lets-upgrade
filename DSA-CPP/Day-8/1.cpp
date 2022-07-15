#include<iostream>
using namespace std;

int main (){

int n,row,col;
cout<<endl<<"enter here a numver : ";
cin>>n;

row=1;
while(row<=n){


    col=1;
    while (col<=n)
    {
        int prin;
        prin=col%2;
        cout<<prin<<" ";
        col++;
    }
    cout<<endl;
    row++;
}
return 0;

}