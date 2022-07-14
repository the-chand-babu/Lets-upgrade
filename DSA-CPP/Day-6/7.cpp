#include<iostream>
using namespace std;

int main(){
    int n,i,fact=0;
    cin>>n;
i=1;
    while(i<=n){
if(n%i==0){
    fact++;
}
i++;
    }
    if(fact==2){
        cout<<endl<<"number is prime "<<n;
    }
    else {
        cout<<endl<<"number is not prime "<<n;
    }
}