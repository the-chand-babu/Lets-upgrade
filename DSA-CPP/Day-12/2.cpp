
#include<iostream>
using namespace std;

int squar (int l , int *ap, int *as){
*ap=(l*l);
*as=(4*l);


}

int main (){
    int l, a,p;
    cout<<"enter a length here : ";
    cin>>l;
    squar(l,&a,&p);
    cout<<a<<" "<<p;
}