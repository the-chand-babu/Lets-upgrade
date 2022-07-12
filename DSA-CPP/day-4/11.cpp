// If a five-digit number is input through the keyboard, write a
// program to print a new number by adding one to each of its
// digits. For example if the number that is input is 12391 then
// the output should be displayed as 23402.

#include<iostream>
using namespace std;
int main(){
    int num,dig,rev=0,rem;

    cout<<endl<<"enter here a number : ";
    cin>>num;

    while (num>0)
    {
        rem=num%10;
        rev=rem;
        num=num/10;

    }
    cout<<"thhis is reverse numver = "<<rev;
    return 0;
    

}