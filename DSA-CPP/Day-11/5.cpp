//intersection of an array ...

#include<iostream>
using namespace std;
void intersection(int arr[],int n,int arr2[],int m){
int ans=0;
for(int i=0; i< n; i++){
  int   element=arr[i];
    for(int j=0; j < m; j++){
        if(element==arr2[j]){
            ans=arr2[j];
            arr2[j]=INT32_MIN;
            // cout<<ans;
            break;
            
        }
    }
}
cout<<ans;
}

int main (){
    int arr[5]={1,2,3,4,5};
int arr2[4]={3,7,8,2};
intersection(arr,5,arr2,4);
}