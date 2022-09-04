// find sum of an element in an array..

#include<iostream>
using namespace std;


int main (){
    int n;
    cout<<"enter a number ";
    cin>>n;
    int *arr = new int [n];
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }

    // sum of an element ..
    int sum=0;

    for(int i = 0; i < n; i++){
        sum+=arr[i];

    }
    cout<<"sum of array element "<<sum;

}