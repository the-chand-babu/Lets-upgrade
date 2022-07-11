#include<iostream>
using namespace std;

int main(){
    int num,abs;
    cout<<endl<<"enter a number ";
    cin>>num;
    if(num<0){
abs=num*-1;
cout<<endl<<"this is the absolute number "<<abs;
    }
    else if(num==0){
        cout<<endl<<"this is not negative and not possitive number "<<num;
    }
    else{
        cout<<endl<<"this is not a negative number "<<num;
    }
    return 0;

}