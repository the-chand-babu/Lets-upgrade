
//binary search ..

#include<iostream>
using namespace std;

int squarRoot(int num){
    int s = 0; 
    int e = num;
    int mid = s+(e-s)/2;
    int ans = 0;
    while(s<=e){
        if(mid *mid <num){
            ans=mid;
            s= mid+1;
        }
        else if (mid * mid == num){
            ans= mid;
            return ans;
        }
        else if (mid * mid >num){
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

double decimalAdd(int ans,int n, int num){
        double factor =1;
        double a ;
    for(int i = 0 ; i < n; i++){
            factor = factor/10;
            for(double j = ans; j*j<= num; j=j+factor){
                a=j;
            }
    }
            return a;
}

int main (){
    cout<<"enter a numver here ";
    int num,n;
    cin>>num;
    cin>>n;
    int ans =squarRoot(num);

    double ab =decimalAdd(ans,n,num);

    cout<<"this is ans "<<ab<<endl;
}