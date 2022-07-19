// print the ncr
#include<iostream> 
using namespace std ;

int fact (int num){

int factorial =1,i;
for(i=num; i>=1; i--){
factorial=factorial*i;


}
return factorial;
}
int R_factorial (int num){
int factorial =1,i;
for(i=num ; i>=1 ; i--){
    factorial=factorial*i;
}
return factorial;

}


int main (){

    int n,r;
    cout<<endl << " enter a value of n here : ";
    cin >> n;
    cout<<endl << "enter a value of r : ";
    cin >> r;
     int n_fac=fact(n);
    int r_fact=R_factorial (r);
    int nCr=n_fac/(r_fact*(n_fac-r_fact));
    cout << endl << nCr;
  


}