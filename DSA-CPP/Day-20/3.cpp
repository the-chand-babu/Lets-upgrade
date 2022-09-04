// find pointer assignment ..'

#include<iostream>
using namespace std;

int main (){

    int n;
    cin>>n;
    int *a= new int[n];
    for(int i =0; i < n; i++){
        cin>>a[i];
        
    }

    cout<<endl;
    cout<<a<<endl;
    cout<<*a<<endl;
    cout<<a[0]<<endl;
    // cout<<&a[0]<<endl;

    

    



}