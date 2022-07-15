#include<iostream>
using namespace std;

int main (){
    int row,col,value,n;
cout<<endl<<"enter a numver : ";
cin>>n;

row=1;

while (row<=n)
{
    value=row;
    col=1;
    while (col<=row)
    {
    cout<<value<<" ";
    value++;
    col++;

    }
cout<<endl;
row++;
    
}
return 0;

}