#include<iostream>
using namespace std;
int main (){
    int a[5],i,max=0;
    for(i=0; i<5; i++){
        cout<<endl<<"enter a value here : ";
        cin >> a[i];
        if(a[i]>max){
            max=a[i];
        }
        
    }
    cout<<endl<< max;
}
