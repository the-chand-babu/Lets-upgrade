#include<iostream>
using namespace std;

int main (){

    int row,col,n;

    cout<<endl<<"enter a number : ";
    cin>>n;

    row=1;
    while (row<=n)
    {
        col=1;
        while (col<=row)
        {
            cout<<row+col-1<<" 4";
            col++;
        }
        cout<<endl;
        row++;
        
    }
    return 0;
    

}