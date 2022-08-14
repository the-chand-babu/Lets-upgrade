#include<iostream>
using namespace std;
int isprime(int num, int i){

    if(i>=1){
        if(num%i!=0){
            // cout<<endl<<0;
            i=i-1;
                // cout<<endl<<i;
                isprime(num,i);
                return 99;
              
             }else
             {
                
                return 0;

             }
         
    }
    
    
}

int main (){
    int num;
    cin>>num;
    int i =num-1;

    // if(isprime(num,i)){
    //     cout<<"this is prime numver "<<num;
    // }else{
    //     cout<<"this is not a prime number "<<num;
    // }

int ans=isprime(num,i);
cout<<ans;
}