#include<iostream>
using namespace std;

int main () {

int a,n,i,j,rem=0,d=0,c ,rev=0,g=0;
cout<<endl<<"enter here a number : ";
cin >>n;
a=n;
while(a>0){
 rem=a%10;
rev=rev*10+rem;
g++;
a=a/10;
}
// cout<<endl<<rev;


while (rev>0)
{
    c=1;
    rem=rev%10;
for (i=1; i<=g; i++)  
{
    c=c*rem;
   
}
//  cout<<endl<<"print c values : "<<c;
d=d+c;
rev=rev/10;

}
cout<<endl<<d;
if(n==d){
    cout<<endl<<"this is amrstrong no ";
}
else {
    cout<<endl<<"this is not armstrong number ";
}

}