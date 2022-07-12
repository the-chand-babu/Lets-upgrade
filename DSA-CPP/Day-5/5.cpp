// WAP for printing fibonacii series:   1,1,2,3,5,8,13,21,….   Up till n digits in series.


#include<iostream>
using namespace std;

int main(){
    int a=0,b=1,c,num,i;

    cout<<endl<<"enter a number : ";
    cin>>num;
    for(i=1;i<=num;i++){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;

    }
    return 0;
}