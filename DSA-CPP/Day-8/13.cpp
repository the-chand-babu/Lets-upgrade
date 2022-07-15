#include<iostream>
 using namespace std;

 int main (){
    int row,col,n;

    cout<<endl<<"enter a numver here : ";
    cin>>n;

    row=1;
    while (row<=n){
        col=1;
        while (col<=row)
        {
            cout<<row-col+1<<" ";
            col++;
        }
cout<<endl;
row++;

        
    }
        
return 0;
    
    
    
 }