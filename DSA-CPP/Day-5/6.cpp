
#include<iostream>
using namespace std;

int main(){

int num,rev=0,rem,upverse=0;
cout<<endl<<"enter the number : ";
cin>>num;

while (num>0)
{
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
}

cout<<endl<<"this is reverse number "<<rev;
while (rev>0)
{
    
    rem=rev%10;
    if(rem==9){
rem=0;
upverse=upverse*10+rem;
    }
else {
    rem++;
    upverse=upverse*10+rem;
}

    rev=rev/10;

}
cout<<endl<<"this is upvrese number = "<<upverse;

}