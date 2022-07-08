//number which is divisible by 5

#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<endl<<"enter a number : ";
    cin>>a;
    if(a%5==0){
        cout<<endl<<"a is divisible by 5";

    }
    else {
        cout<<endl<<"a is not divisble by 5";
    }
    return 0;
    
}