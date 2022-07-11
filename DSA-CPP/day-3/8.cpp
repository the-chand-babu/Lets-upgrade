// A five-digit number is entered through the keyboard. Write a
// program to obtain the reversed number and to determine
// whether the original and reversed numbers are equal or not.

#include<iostream>
using namespace std;
int main(){
    int num,a,b,c,d,e,rev,orig;
    cout<<endl<<"enter a number : ";
    cin>>num;
    orig=num;
    a=num%10;
    num=num/10;
    b=num%10;
    num=num/10;
    c=num%10;
    num=num/10;
    d=num%10;
    num=num/10;
    e=num%10;
    num=num/10;
    rev=(a*10000+b*1000+c*100+d*10+e*1);
    
if(orig==rev){
    cout<<endl<<"this is equal a reverse number";
}else {
    cout<<endl<<"this is not equal to reverse";
}
cout<<endl<<rev<<" this is a reverse number ";
cout<<endl<<orig<<" this is a orig number ";
return 0;
}