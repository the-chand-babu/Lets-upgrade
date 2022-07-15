#include<iostream> 
using namespace std;

int main(){
    int row,col,n;
    cout<<endl<<"enter a number here : ";
    cin>>n;
    row=1;

    while (row<=n)
    {
      col=1;
      while (col<=row)
      {
        char cha='A'+row-1;
        cout<<cha<<" ";
        col++;
      }
      cout<<endl;
      row++;
    }
    return 0;
    
}