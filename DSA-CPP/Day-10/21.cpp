//find unique eliment 

#include<iostream>
using namespace std;
int findunique (int arr[],int n){
    int ans=0;
    for(int i=0; i<n; i++){
        ans=ans^arr[i];
    }
    return ans;
}


int main (){
    int array[7]={1,2,1,2,4,4,5};
int ans=findunique(array,7);
cout<<endl<<ans;
}