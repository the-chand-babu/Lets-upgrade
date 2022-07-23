// colounm wise sum .....

#include<iostream>
using namespace std;
void colwisesum (int arr [][3], int n){
    for (int i = 0; i < 3; i++){
        int sum=0;
        for( int j = 0; j < 3; j++){
           sum+= arr[j][i];
        }
        cout<< endl << sum;
    }
}

int main (){
    int arr[3][3];
    for( int i = 0; i < 3; i++){
        for( int j=0; j < 3; j++){
            cin>>arr[i][j];
        }
    }
    colwisesum ( arr, 3);
    
}