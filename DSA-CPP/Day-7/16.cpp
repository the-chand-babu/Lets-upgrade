#include<iostream>
 using namespace std;

 int main (){
    int n,ans=0;

    cout<<endl<< " enter a number here  : ";
    cin >> n;

    while(n != 0){
        int digit = n%10;

    
        ans=(ans*10)+digit;
        n=n/10;
    }
            if((ans>INT32_MAX/10)||(ans<INT32_MIN/10)){
        cout<<endl<<"this is zero "<<0;}
        else{
    cout<<endl<<"this is a answer : "<<ans;
    }
 }