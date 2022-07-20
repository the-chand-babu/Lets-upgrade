// pair sum three equal to hai target k 
#include<iostream>
using namespace std;

int main (){
int arr[6]={3,4,5,6,8,9};
int target=18;
for(int i=0; i < 6-2; i++){
    for(int j=i+1;j<6-1;j++ ){
for ( int k=j+1; k<6; k++){
    if ( arr[i]+arr[j]+arr[k]==target){
        cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<" ";
       
    }

}
    }
} 
cout<<endl;
}