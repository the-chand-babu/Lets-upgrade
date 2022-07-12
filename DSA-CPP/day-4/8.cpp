// If a four-digit number is input through the keyboard, write a
// program to obtain the sum of the first and last digit of this
// number.


#include<iostream>
using namespace std;

int main(){
    int sum,num,ld;
cout<<endl<<"enter here number : ";
cin>>num;
    ld=num%10;
    while (num>=10)
    {
       num=num/10;
    }
    sum=num+ld;
    cout<<endl<<"this is a sum of first and last digit ="<<sum;
return 0;
}