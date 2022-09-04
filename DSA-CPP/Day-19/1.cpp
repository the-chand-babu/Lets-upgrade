//searching in an aray..

#include<iostream>
using namespace std;

int main (){
    int k ;
    cout<<"enter a key here ";
    cin>>k;
    int n;
    cin>>n;
    int *arr = new int [n];
    for(int i = 0; i < n;i++){
        cin>>arr[i];
    }


    //finding a lenear value..
    int s =0;
    int e=n-1;
    while(s<=e){
        if(arr[s]==k ){
            
            cout<<"this is index "<<s<<arr[s]<<endl;
            cout<<"s loop "<<endl;
            break;
        }
        else if (arr[e]==k){
            cout<<"this is index "<<e<<arr[e]<<endl;
            break;
        }
        else{
            s++;
            e--;
        }
    }


}
