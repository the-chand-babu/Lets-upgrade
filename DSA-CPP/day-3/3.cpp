#include<iostream>
using namespace std;

int main(){
   int a,b,c;
cout<<endl<<"enter a number a : ";
cin>>a;
cout<<endl<<"enter a number b : ";
cin>>b;
cout<<endl<<"enter a number c :";
cin>>c;
if(a>b&&a<c||a<b&&a>c){
    cout<<endl<<a<<"is middle number ";
}
else if (b>a&&b<c||b<a&&b>c){
    cout<<b<<"is middle number ";

}else if (c>a&&c<b||c<a&&c>b){
    cout<<c<<"is middle number ";
}
return 0;

}