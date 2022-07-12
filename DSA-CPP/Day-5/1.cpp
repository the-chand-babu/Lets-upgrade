// WAP for checking 10 different for positive negative and zero

#include<iostream>
using namespace std;

int main(){
    int num,post=0,nega=0,zero=0,i;
   
   for (i=1;i<=10;i++){
    cout<<endl<<"enter here a number : ";
    cin>>num;
    if(num>0){
post++;
    }
    else if (num<0){
        nega++;
    }
    else {
        zero++;
    }
   }
   cout<<endl<<"positive number = "<<post;

   cout<<endl<<"nigative number = "<<nega;

cout<<endl<<"zero = "<<zero;
return 0;
}