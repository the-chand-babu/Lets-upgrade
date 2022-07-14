


#include<iostream>
using namespace std;

int main(){

    int p,n,r,count=1;
    float si;

    for(count;count<=3;count++){
        cout<<endl<<"enter a p :";
        cin>>p;
        cout<<endl<<"enter a n :";
        cin>>n;
        cout<<endl<<"enter a r :";
        cin>>r;
        si=(float)p*r*n/100;
        cout<<endl<<"this is simple,interrest : "<<si;

    }
}