//find duplicate 

#include<iostream>
using namespace std;
int findduplicate (int arr[],int n){
int ans=0;
for(int i=0; i < n; i++){
    ans=ans^arr[i];
}
for(int i=0; i<n-1; i++){
    ans=ans^arr[i];
}
return ans;
}
int main (){
    int arr[5]={1,2,3,4,3};
int ans=findduplicate(arr,5);
cout<<endl<<ans;

}