
#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    double ans=0;
    cout<<endl<<"this is number do : ";
    cin>>n;
int i=0;
while (n != 0)
{
  int bit=n&1;
   ans=(bit*pow(10,i))+ans;
   
 
   n=n>>1;
     i++;

}
cout<<endl<<ans;
return 0;
    
}
