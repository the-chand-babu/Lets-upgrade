#include<iostream>
 #include<math.h>
 using namespace std;

 int main(){
    int n,i=0,digit;
    double ans=0;

    cout<<endl<<"enter a numver here : ";
    cin>>n;

    while(n != 0){
        
       digit= n&1;
        ans=(digit* pow(10,i))+ans;
        
        n=n>>1;
        i++;
    }
    cout<<endl<<"thhis is ur number "<<ans;
    return 0;
 }