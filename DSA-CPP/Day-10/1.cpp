// exit from infinite loop without using break;

#include<iostream>
using namespace std;

void Infinite_loop(int num){
int i=1;
while(i<=num){
    switch (i)
    {
    case 1 : cout<<"kuch bhi";
        break;
    
    default:
        break;

    }
    
    
}
}

int main (){
    int n;
    cout<<endl<<"enter a numer here : ";
    cin>>n;
Infinite_loop(n);
}