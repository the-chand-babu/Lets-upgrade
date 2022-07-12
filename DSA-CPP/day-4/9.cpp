#include<iostream>
using namespace std;
int main(){
    int tp,litmen,litwomen,litper,tmen,ilm,ilw,iltpe,sum;

    cout<<endl<<"enter here total population : ";
    cin>>tp;

    tmen=tp*52/100;
    litper=tp*48/100;
    litmen=tp*35/100;
    ilm=tmen-litmen;
iltpe=tp-litper;
ilw=iltpe-ilm;
sum=ilw+ilm;
cout<<endl<<"this is a ilw and ilmen population = "<<sum;
return 0;

}