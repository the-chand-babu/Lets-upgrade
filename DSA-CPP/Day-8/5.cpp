
#include<iostream>
using namespace std;

int main (){
    int row,col,n;


cout<<endl<<"enter a numver : ";
cin>>n;
row=n;

while(row>=1){

col=1;
while(col<=row){
    cout<<col;
    col++;
}
cout<<endl;
row--;
}
return 0;

}