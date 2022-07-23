//sorting of array...

#include<iostream>
using namespace std;
void printarray (int arr[], int n){
for( int i = 0; i < n ; i++){
    cout<<arr[i]<<" ";
}
}

int main (){
    int arr[10]={1,0,1,1,0,0,1,0,1,0};
    int n=10;
    int start=0;
    int end=n-1;

    while (start < end){
        if(arr[start]==0){
            start++;
            end--;
        }else if (arr[start]==1 && arr[end]==0){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }else if  (arr[end]==1){
            end--;
        }
    }
    printarray(arr,10);
}