// WAP for printing multiplication table of entered no by the user.

#include<iostream>
using namespace std;

int main(){
    int num,multiplication,i;
cout<<endl<<"enter a number : ";
cin>>num;
    for(i=1;i<=10;i++){
        multiplication=i*num;
        cout<<endl<<"this is table = "<<multiplication;
    }
    return 0;
}