//min nikalo
#include<iostream>
using namespace std;

void Print_Array(int arr[],int n){
    int min=INT32_MAX;
for(int i=0; i<n; i++){
    
    if(arr[i]<min){
        min=arr[i];
    }
    
}
cout<<endl<<"this is min : "<<min;
}

int main (){
    int arr[10],size;
    cout<<endl<<"enter your size user : ";
    cin>>size;
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }
    Print_Array(arr,size);
}