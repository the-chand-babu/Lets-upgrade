#include<iostream>
using namespace std;

int main (){

    int num , rem , rev=0;
    cout<<endl<<"enter a numver here : ";
    cin>>num;

    while (num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;

        

    }
    cout<<endl<<rev;
    return 0;
     
}