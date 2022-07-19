//prime number formula using function ;

#include<iostream>
using namespace std;

bool is_prime (int num){
int i;
for(i =2; i< num; i++){
if(num%i==0)
return 0;
}
return 1;
}
int main (){
    int n;
    cout << endl << " enter a numver here : ";
    cin >> n;
 int prime=is_prime(n);
 if(prime==1){
    cout << endl << true;

 }else {
    cout << endl << false;
 }
}









