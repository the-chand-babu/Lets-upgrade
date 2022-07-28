// sum of digit an reverse of number ....

#include<iostream>
using namespace std;

void reverse (int n,int*s,int *r){
   int rem=0;
   while (n>0)
   {
    /* code */
    rem=n%10;
    *r=*r*10+rem;
    *s=*s+rem;
    n=n/10;
   }
   
}

int main (){
    
    int n,sum=0,rev=0;
    cout<<"enter a number here : ";
    cin>>n;
    reverse (n,&sum,&rev);
    cout<<sum<<" "<<rev;
}