
#include<iostream>
using namespace std;

int main(){
    int ch,a,b,c;
    float d;
   while (ch>=1||ch<=4){

    cout<<endl<<"1. for addition ";
    cout<<endl<<"2. for substraction ";
    cout<<endl<<"3. for multiplication ";
    cout<<endl<<"4. for division ";
    cout<<endl<<"5. for exit ";
    cout<<endl<<"enter a choice : ";
    cin>>ch;

    switch (ch){
        
        case 1 :
        cout<<endl<<"enter here a : ";
        cin>>a;
        cout<<endl<<"enter here b : ";
        cin>>b;
        c=a+b;
        cout<<endl<<"this is your addition "<<c;
        break;
    case 2 :
    cout<<endl<<"enter here a : ";
        cin>>a;
        cout<<endl<<"enter here b : ";
        cin>>b;
            c=a-b;
            cout<<endl<<"this is your substraction : "<<c;
            break;
            case 3 :
            cout<<endl<<"enter here a : ";
        cin>>a;
        cout<<endl<<"enter here b : ";
        cin>>b;
            c=a*b;
            cout<<endl<<"this is your substraction :"<<c;
            break;
            case 4:
            cout<<endl<<"enter here a : ";
        cin>>a;
        cout<<endl<<"enter here b : ";
        cin>>b;
            d=(float)a/b;
            cout<<endl<<"this your division : "<<d;
    }
    
   if(ch==0||ch>4){
    break;
    }
} 

}