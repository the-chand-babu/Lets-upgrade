// selection sorting...
#include<iostream>
using namespace std;
//sorting function...

void selectionsort(int arr[],int n){
    for(int i = 0; i < n-1; i++){
        for(int j=i+1; j < n; j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
//printing functiion...
void printarray (int arr[],int n){
    for( int i =0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}

//input taking function..
void inputetaking (int arr[],int n){
    for( int i = 0; i < n; i++){
        cin>>arr[i];
    }
}

//this is main function...
int main (){
    int n; 
    cin>>n;
    int *arr = new int [n];

    //call input taking function..
    inputetaking(arr,n);

    //slelection sorting fuction..
    selectionsort(arr,n);
    //printing fuction..

    printarray(arr,n);
    delete []arr;
}

