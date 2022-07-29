/////dynamic array selection sort

#include<iostream>
using namespace std;
void inputtaking (int arr[],int n){
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
}
///sorting array..
void sortingarray (int arr[],int n){
    int s=0;
    int e=n-1;
    for(int i = 0; i < n; i++){
        for (int j =i+1; j <n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
  
    
    
}
//printing array...
void printingarray (int arr[],int n){
    for( int i = 0; i <n; i++){
        cout<<arr[i]<<" ";
    }
}

int main (){
    cout<<endl<<"enter a numver here";
    int n;
    cin>>n;

    int *arr = new int [n];

   //input taking ...
   inputtaking (arr,n);
   sortingarray(arr,n);
   printingarray(arr,n);

delete []arr;
}