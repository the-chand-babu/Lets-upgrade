// WAP for printing total and average of 10 different no’s.


#include<iostream>
using namespace std;


int main(){
    int num,count=0,sum=0,i;
float average;
for(i=1;i<=10;i++){
    cout<<endl<<"enter a number : ";
    cin>>num;
    sum=sum+num;
    count++;
    }
    average=sum/count;
cout<<endl<<"this is average of 10 number = "<<average;
cout<<endl<<"this is count = "<<count;
cout<<endl<<"this is sum = "<<sum;
return 0;
}
