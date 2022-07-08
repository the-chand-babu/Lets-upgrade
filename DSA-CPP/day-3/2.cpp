
#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<endl<<"enter a number : ";
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"monday";
        break;
        case 2 :
        cout<<"Tuesday";
        break;
        case 3 :
        cout<<"wednesday";
        break;
        case 4 :
        cout<<"thursday";
        break;
        case 5 : 
        cout<<"friday";
        break;
        case 6 :
        cout<<"suterday";
        break;
    
    default:
    cout<<"this is not day";
        break;
    }
}