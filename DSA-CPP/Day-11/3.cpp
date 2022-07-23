// UP down Matrix .....

#include<iostream>
 using namespace std;
 void updown (int arr[][3],int n){
    for(int i= 0; i < n; i++){
        for ( int j=0; j<n; j++){
            if(j%2==0){
                cout<<endl<<arr[i][j]<<" ";
            }
        }
    }cout<<endl;
 }

 int main (){
int arr[3][3];
for(int i=0; i < 3; i++){
    for(int j=0; j < 3; j++){
        cin>>arr[i][j];
    }
}
 updown (arr,3);

 } 