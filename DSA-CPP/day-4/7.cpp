// If a five-digit number is input through the keyboard, write a
// program to reverse the number.

#include<iostream>
using namespace std;

// int main(){
//     int A,B,C,D,E,a,b,c,d,e,rev;
//     cout<<endl<<"enter a five digit number : ";
//     cin>>num;

//     a=num%10;
//     num=num/10;
//     b=num%10;
//     num=num/10;
//     c=num%10;
//     num=num/10;
//     d=num%10;
//     num=num/10;
//     rev=a*10000+b*1000+c*100+d*10+e*1;
//     cout<<endl<<"this is a reverse number = "<<rev;
//     return 0;
// }

int main(){
    int num,re,sum=0;
    cout<<endl<<"enter a number : ";
    cin>>num;
    while (num>0)
    {
        re=num%10;
        sum=sum*10+re;
        num=num/10;
    }
    cout<<endl<<"this is a reverse number = "<<sum;
    return 0;
}