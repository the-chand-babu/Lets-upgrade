/// pascal pyramid ...
 
 #include<iostream>
 #include<iomanip>
 using namespace std; 

 void pascal (int arr[][5],int n){
int i=0,j=0,space=10;

for ( i = 0; i < n; i ++){
    for ( j = 0; j < space; j++){
        cout<<" ";
        }
    
 
    
    for(int k =0;k <=i; k++ ){
        if(k==0||k==i){
            arr[i][k]=1;
            cout<<setw(4)<<arr[i][k];
        }else{
            arr[i][k]=arr[i-1][k]+arr[i-1][k-1];
            cout<<setw(4)<<arr[i][k];
        }
      
    }   space=space-2;
    cout<<endl;
}
 }
 int main (){
    int arr[5][5];
    pascal (arr , 5);
 }
///// 