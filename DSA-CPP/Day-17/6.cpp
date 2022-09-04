
#include<iostream>
using namespace std;

int counting(int n){
    if(n==0){
        return 0;
    }
        // int smaller =counting(n-1);
        // int bigger +=smaller
        // return bigger;
    return n+=counting(n-1);
}

int main (){
    int n ;
    cin>>n;
    int count = 0; 

   int ans= counting(n);
   cout<<ans;
}