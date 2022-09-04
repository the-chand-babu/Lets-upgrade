// insertion sort..

#include<iostream>
using namespace std;
//intput taking in an array..

void inputtaking(int arr[],int n){
    for( int i = 0; i < n; i++){
        cin>>arr[i];
    }
}
//insertion sorting ...
void insersort (int arr[],int n){
    int i = 1;
    while (i < n)
    {
        /* code */
        int temp = arr[i];
        int j = i-1;
        while (j >= 0)
        {
            /* code */
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
        i++;
        
    }

    
}

    // printing array..
    void printingarray(int arr[],int n){
        for( int i = 0; i < n; i++){
            cout<<arr[i]<<" ";
        }
    }


//main function...

int main (){
    int n;
    cin>>n;
    int *arr = new int [n];

     //calling input taking ...
     inputtaking(arr,n);
     //before sorting printing
     cout<<"before sorting printing"<<endl;
     printingarray(arr,n);
cout<<endl<<"after sorting print "<<endl;

     //sorting calling
     insersort(arr,n);

     //printing function
     printingarray(arr,n);

delete []arr;
}