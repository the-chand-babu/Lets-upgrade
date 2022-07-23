// prin diagnols ..

#include<iostream>
 using namespace std;
void print_diagnols (int arr[][3],int n){
    
for(int i =0; i< n ; i++){
    for(int  j=0; j<n; j++){
        if(i==j){
            cout<<arr[i][j]<<" ";
        }else if(i+j==2){
            cout<<arr[i][j]<<" ";
        }
    }
}
}
 int main (){
    int arr[3][3];

    for(int i=0; i < 3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    print_diagnols(arr,3);
 }