//prime numver....

#include<iostream>
using namespace std;

void isprime(int n, int *p){
     if(n==1){
            cout<<"this is is not prime or not composit number : "<<n;
        }else if (n==2){
            cout<<"this is prime number :"<<n; 
        }
    for( int i = 2; i < n; i++){
       
       if(n%i==0){
            cout<<"this is not a prime number : "<<n;
            break;
        }else{
            cout<<"this is a prime number : "<<n;
            break;
        }
    }
}

int main (){
    int num;
cin>>num;
    int *p=0;
   
    isprime(num,p);
}