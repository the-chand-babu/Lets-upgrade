#include<iostream>
using namespace std;
int main (){
    int ans=0;
    int arr[5]={1,2,5,2,6};
    for(int i=0; i<5-1; i++){
for(int j=i+1;j<5;j++){
    if(arr[i]==arr[j]){
        
ans=ans+arr[i];
break;
    }
    

}
    }
    cout<<endl<<ans;
    
return 0;
}