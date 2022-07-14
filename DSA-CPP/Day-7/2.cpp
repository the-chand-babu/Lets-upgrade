// perfect number

#include<iostream>
using namespace std;

int main(){
int n,count,i,j;
cout<<endl<<"enter a numver : ";
cin>>n;

if(n>100){
    cout<<endl<< "hundered se aage ka print nahi kar sakte";
    
}else{

for(j=1;j<=n; j++){  
    
    
count=0;

for (i=1; i <= j; i++){
    
 if(j==i){
        continue;
    }else if (j%i==0){
        count=count+i;
    }
 
   }
   
//  cout<<endl<<"this is factor in number : "<<count;

 if (count==j){
    cout<<endl<<"this is perfect number : "<<j;

}
else {
    cout<<endl<<"this is not perfect number : "<<j;
}

    }
    }
    }



