
#include<iostream>
using namespace std;

int main(){
    int ot,otp,i;
    float time;
    for(i=1;i<=10;i++){

    cout<<endl<<"enter here your timing : ";
    cin>>time;

    if(time>40&&time<41){
        cout<<endl<<"he did not do over time";
    }
    else if (time>40&&time>=41){
        time=time-40;
        otp=time*12;
        cout<<endl<<"he is getting overtime pay "<<otp;
    }else if(time<40){
        cout<<endl<<"i will give u warning leter ";
    }
    }
    return 0;
}