// fabinaci series

#include<iostream>
using namespace std;

int main(){
    int a=1,b=1,n,c,i;

    cout<<endl<<"enter here input : ";
    cin>>n;
cout<<endl<<"this is series "<<a<<" "<<b<<" ";

for(i=3;i<=n;i++){
    c=a+b;
    cout<<c<<" ";
    a=b;
    b=c;
}
return 0;
}