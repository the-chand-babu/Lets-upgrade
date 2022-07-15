// // 1 2 3 4 5
// // 6 7 8 9 10
// // 11 12 13 14 15
// // 16 17 18 19 20
// // 21 22 23 24 25
// pattern print



#include<iostream>
using namespace std;

int main (){

int row,col,n,count;

cout<<endl<<"enter here a numver : ";
cin>>n;
count=1;

row=1;
while (row<=n){

col=1;

while (col <= n){
    cout<<count<<" ";
    count++;
    col++;
}
cout<<endl;
    row++;

}
return 0;
}