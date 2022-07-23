// triplet sum u have three arrays u need to find the sum of three arrays 

#include<iostream> 
using namespace std;
int tripletesum (int arr[],int n){
    int target=10;
    int sum=0;
    for(int i=0; i < n; i++){
        for(int j=i+1; j < n; j++){
            for(int k=j+1; j < n; j++){
                if(arr[i]+arr[j]+arr[k]==target){
                    cout<<arr[i]<<arr[j]<<arr[k];
                    break;
                }
            }
        }
    }
    return 0;
}

int main (){
    int arr[5]={1,2,3,4,5};
   int x=tripletesum(arr,5);
   cout<<endl<<x;

}