#include<iostream>
using namespace std;

int isprime(int num , int i,int count){
    
    if(i <= num){
        if(num%i==0){
            count++;
            isprime(num, i+1,count);
        }else{
            isprime(num , i+1,count);
        }

    }else{
        return count;
    }

    
    
}

int main (){
    int num;
     cin>>num;
        int i = 1;
        int count = 0;
     if(isprime(num,i,count)==2){
        cout<<"this is a prime numver : "<<num;

     }else{
        cout<<"this is not a prime number : "<<num;

     }


    // int ans=isprime(num,i, count);
    // cout<<ans;
    
}