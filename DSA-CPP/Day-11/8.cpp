// Row wise sum .../

#include<iostream>
using namespace std;
void rowsum (int arr[][2],int n){
    int max=INT32_MIN;
    int row=0;
    for(int i=0; i < 3; i++){
        int sum=0;
        for(int j = 0; j < 2; j++){
            sum += arr[i][j];
            row=i;
        }cout<<endl<<sum;
        if(sum>max){
            max=sum;
        }
    }
    cout<< endl << "this is max "<<max;
    cout<< endl << "this is row "<<row;

}

void printarray (int arr[][2],int n){
    cout<<endl<<"this array printing :"<<endl;
    for( int i = 0; i < 3; i++){
        for( int j = 0; j < 2; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main (){
    int arr[3][2];

    // input taking column wise;;
    
    for(int i = 0 ; i < 3; i++){
        for( int j =0 ; j < 2; j++){
        
            cin>>arr[i][j];
        }
    }
    rowsum(arr,3);
    printarray(arr,3);
}