// with function sum of an eleemtn..


#include<iostream>
using namespace std;

void inputtaking(int *arr, int n){
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
}

int sumofelement(int *arr, int n){
    int sum =0;
    for(int i = 0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int n;
     cin>>n;
     int *arr= new int [n];

     //input taking function..
     inputtaking(arr,n);

     //sum function

    int sum=sumofelement(arr,n);
cout<<"this is sumof aray element "<<sum<<endl;

}