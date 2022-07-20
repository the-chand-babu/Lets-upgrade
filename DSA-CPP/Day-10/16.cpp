#include<iostream>
using namespace std;
void swapping_array (int arr[],int n){
int start=0,end=n-1;
while (start<=end){
    int temp=0;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;


}
}
void print_array (int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }cout<<endl;

}

int main (){
    int arr[6]={1,2,3,4,5,6};
    swapping_array(arr,6);
print_array(arr,6);
}