#include<iostream> 
using namespace std;
// Minimum and maximum in 2D array . 
void max (int arr[][3],int n){
    int ans=0;
    int row=0;
    
for( int i =0; i < n; i++){
    for(int j=0; j< n; j++){
if(arr[i][j]>ans){
    ans=arr[i][j];
    row=i;
}

}
}
cout<<endl<<"this is row : "<<row;

cout<<endl<<ans;
}
// this is function for minimum
void min (int arr[][3],int n){
    int ans=INT32_MAX;
    
for( int i =0; i < n; i++){
    for(int j=0; j< n; j++){
if(arr[i][j]<ans){
    ans=arr[i][j];
    
}

}
}

cout<<endl<<ans;
}

//this is for array printing
void printArray (int arr[][3],int n){
for (int row=0; row < n ; row++){
for( int col =0; col < n; col++){
    cout<<arr[row][col]<<" ";
}
cout<<endl;
}
}
//this is calling function
int main (){
    int arr[3][3];
    for(int i = 0; i < 3; i++){
        for(int j=0; j < 3; j++){
            cout<<endl<<"enter a value : ";
            cin>>arr[i][j];

        }
    }
    printArray(arr,3);
    max(arr,3);
    min(arr,3);
}