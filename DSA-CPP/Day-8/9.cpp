
#include<iostream>
using namespace std;

int main (){
    int row,col,n;
    cout<<endl<<"enter here a numver : ";
    cin>>n;

    row=1;
    while(row<=n){
        col=1;
        while ( col<=n)
        {
            cout<<row<<" ";
            col++;

        }
        cout<<endl;
        row++;

        
    }
    return 0;
}