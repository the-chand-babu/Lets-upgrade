///first sorting and then searching..
#include<iostream>
using namespace std;

int leniarseacrh (int *arr, int n,int key){
    for(int i = 0; i < n; i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}

void bubblesort(int *arr, int n){
        for(int i = 1; i < n; i++){
            bool swapped = false;
            for(int j = 0; j < n-i; j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swapped=true;
                }

            }
            if(swapped==false){
                break;
            }
        }
}

void inputtaking(int *arr, int n){
    for(int i = 0; i < n; i++){
            cin>>arr[i];
    }
}

int main (){
    int n; 
    cin>>n;
    int key;
    cout<<"enter a key here :";
    cin>>key;

    int *arr = new int[n];
    //input taking function
    inputtaking (arr, n);

    //for sorting ..
    bubblesort (arr, n);
cout<<endl;
   int ans= leniarseacrh(arr,n,key);
//    cout<<ans;
   if(ans){
    cout<<"key is present :";
   }else{
    cout<<"key is not present";
   }
   cout<<endl<<"sorted array"<<endl;
   for(int i = 0; i < n; i++){
    cout<<arr[i]<<" ";
   }cout<<endl;
}

