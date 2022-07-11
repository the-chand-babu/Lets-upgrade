// If a five-digit number is input through the keyboard, write a
// program to calculate the sum of its digits.

#include<iostream>

using namespace std;

int main(){
    int num,sum=0,re=0;
    cout<<endl<<"enter here num : ";
    cin>>num;
    while (num>0){
    
     re=num%10;
      sum+=re;
        
        num=num/10;
        }
    cout<<endl<<"this is sum = "<<sum;
    
    return 0;
}


// #include<iostream>
// using namespace std;

// int main(){
//     int num,d1,d2,d3,d4,d5,num2;
//     cout<<endl<<"enter here num : ";
//     cin>>num;
    
//     d1=num%10;
//     d2=(num/10)%10;
//     d3=(num/100)%10;
//     d4=(num/1000)%10;
//     d5=(num/10000)%10;
// num2=d1+d2+d3+d4+d5;
// cout<<endl<<"this is a "<<num2;
// return 0;
// }