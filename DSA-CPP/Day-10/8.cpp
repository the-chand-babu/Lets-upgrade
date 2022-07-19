#include<iostream>
using namespace std;

int main (){
    int a[6],i,sum=0,count=0;
    for(i = 0; i < 6; i++){
cout<<endl<<"enter a value here : ";
cin >> a[i];
sum=sum+a[i];
count++;
 
    
}
cout<<endl<<"this is the value of count "<<(sum/count);
}
