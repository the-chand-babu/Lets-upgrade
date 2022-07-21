// find duplicate 
#include<iostream> 
using namespace std;

void duplicate (int arr[],int n){
    int ans=[4];
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n;j++){
            if (arr[i]==arr[j]){
                ans[i]=arr[i];
            }
        }
    }
    for(int i=0; i<4 ; i++){
        cout<<ans[i];
    }cout<<endl;
}

int main (){
    int arr[6]={1,4,3,4,5,5};
    duplicate(arr , 6);
    

}