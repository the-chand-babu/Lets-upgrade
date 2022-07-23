// 90  digree rotate matrix ...
#include<iostream>
using namespace std;
void niinty (int arr[][3],int n){
    for( int i = 0 ; i < n ; i++){
        for ( int j = 0; j < 3; j++){
            cout<<arr[j][i]<<" ";
        }cout<<endl;

    }

}


int main (){
    int arr[3][3];
    for( int i = 0; i < 3; i ++){
        for ( int j = 0; j < 3 ; j++){
            cin >> arr[i][j];

        }
    }
    niinty(arr, 3);
}