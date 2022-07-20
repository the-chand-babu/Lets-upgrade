#include<iostream>
using namespace std;


int main (){
    
    int arr[9]={1,1,1,0,1,0,0,0,0};
    int start=0, end=9-1;
    while(start<end){
        if(arr[start]==0){
            start++;
        }else if (arr[start]==1&&arr[end]==0){
            swap(arr[start],arr[end]);
            start++;
            end--;
        }else if (arr[end]==1){
            end--;
        }
    }
    for(int i=0; i<9; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}