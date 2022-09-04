//// bubble sorting...function..

#include<iostream>
using namespace std;

//sorting function...

void bublesort(int arr[],int n){
    for(int i = 1; i <n; i++){
        bool swaped=false;
        for(int j=0; j <n-i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped=true;
            }
        }
        if(swaped==false){
            break;
        }
    }
}
//printing function

void printarray (int arr[],int n){

for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
}
}
//main function 

int main (){
    int n;
    cin>>n;

//input taking array...

    int *arr = new int [n];
for(int i = 0; i < n; i++){
    cin>>arr[i];

}

//caling swaping bfunction...
bublesort(arr,n);
//calling printing function..
printarray(arr,n);
delete []arr;
}