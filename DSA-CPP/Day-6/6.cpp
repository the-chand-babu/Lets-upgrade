#include<iostream>

using namespace std;
int main(){
    char a;

    cout<<endl<<"enter here a : ";
    cin>>a;
    if(a>=65&&a<=90){
        cout<<endl<<"this is uppercase character";

    }else if (a>=97&&a<=122){
        cout<<endl<<"this is lower case";

    }
    else if (a>=48&&a<=57){
        cout<<endl<<"this is numeric valuw";

    }
    else if (a>=33&&a<=47){
        cout<<endl<<"this is arithmetic operator";

    }
    else if (a>=58&&a<=64){
        cout<<endl<<"tis is specail character";
        
    }
}