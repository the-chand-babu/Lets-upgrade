#include<iostream>
using namespace std;

int main(){
int row,col,n;
char cha='A'+1-1;

cout<<endl<<"enter value here ";
cin>>n;

row=1;
while (row <=n)
{
    col=1;
    while(col<=row){
        cout<<cha<<" ";
        cha++;
        col++;
    }
    cout<<endl;
    row++;
}




}