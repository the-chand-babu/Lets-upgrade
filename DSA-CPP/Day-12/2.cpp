
#include<iostream>
using namespace std;

int squar (int l){

int ap=l*l;
 int *arp=&ap;
return *arp;

}

int main (){
    int l;
    cout<<"enter a length here : ";
    cin>>l;
    cout<<endl<<squar(l);
}