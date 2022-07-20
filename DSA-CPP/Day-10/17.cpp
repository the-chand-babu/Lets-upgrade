#include<iostream>
using namespace std;
void swapping_func (int arr[], int n){
    for(int i=0; i<n; i=i+2){
        if(arr[i+1]<n){
        swap(arr[i],arr[i+1]);
}
    }
}
    void print_array (int arr[],int n){
for (int i=0; i<n ; i++){
    cout<<arr[i]<<" ";

}cout<<endl;
    
}

int main (){
    int arr[6]={1,2,3,4,5,6};
swapping_func(arr,6);
print_array(arr,6);
}