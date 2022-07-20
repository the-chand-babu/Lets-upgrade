#include<iostream>
using namespace std;

int factorial(int n){

int fact=1,i;
for(i=1; i<=n; i++){
    fact=fact*i;
}
return fact;
}

int nCr(int n,int r){
    
     int num=factorial(n);
     int denom=factorial(r)*factorial(n-r);
     return num/denom;

}
int main (){
 int n,r;
 cout<< endl<<"enter a value here ";
cin >>n;
 cout<< endl<<"enter a value here ";
cin>>r;
int ans=nCr(n,r);
cout<<endl<<ans;
return 0;
}