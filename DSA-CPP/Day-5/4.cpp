// WAP for calculating factorial of a entered no.

#include<iostream>
using namespace std;

int main(){

    int num,fact,total=1,i;

    cout<<endl<<"enter a numeber : ";
    cin>>num;
    for(i=num;i>0;i--){
        total=total*i;

    }
    cout<<endl<<"this is factorial total = "<<total;
    return 0;
}