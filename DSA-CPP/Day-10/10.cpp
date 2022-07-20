#include<iostream>
using namespace std;

int setbit(){
    int a,b;
    cout<<endl<<"enter a number here ";
    cin >>a;
    int count=0;
    while(a!=0){
        if(a&1==1){
        count++;}
        a=a>>1;
       
    
}
 return count;
}
int main(){
  
    int x=setbit();
    cout<<endl<<x;
      return 0;
}