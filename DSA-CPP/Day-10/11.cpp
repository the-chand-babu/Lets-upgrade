#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start =0;
    int end=n-1;
    while (start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    
}

void Print_array(int arr[],int n){
    for(int i=0; i<n; i++){
cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main (){
    
    int arr[5]={1,2,3,4,5};
    int brr[6]={3,5,-2,96,43,5};

    reverse(arr,5);
    reverse(brr,6);
    Print_array(arr,5);

    Print_array(brr,6);


}