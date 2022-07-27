// sum of digit an reverse of number ....

#include<iostream>
using namespace std;

int reverse (int n){
   int sum=0,rem=0;
   while (n>0)
   {
    /* code */
    rem=n%10;
    sum=sum+rem;
    n=n/10;

   }
   int *p=&sum;
   
  
   return *p;
    
}

int main (){
    
    int n;
    cout<<"enter a number here : ";
    cin>>n;
    cout<<endl<<reverse(n);
}