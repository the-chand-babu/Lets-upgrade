// check triangle is possible or not ;

#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cout<<endl<<"enter here a : ";
    cin>>a;
    cout<<endl<<"enter here b : ";
cin>>b;
cout<<endl<<"enter here c : ";
cin>>c;
d=a+b+c;
if(d==180){
    cout<<endl<<"triangle is possible ; ";

}
else {
    cout<<endl<<"triangle is not possible ; ";

}
return 0;
}
