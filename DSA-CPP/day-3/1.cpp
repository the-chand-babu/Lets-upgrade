
#include<iostream>
using namespace std;
int main (){
    int a,b,choice;
    float d;
    cout<<endl<<"arithmetic Operator Menu";
    cout<<endl<<"enter 1 . for Addition";
    cout<<endl<<"enter 2 . for substraction";
    cout<<endl<<"enter 3 . for multiply";
    cout<<endl<<"enter 4 . for division";
    cout<<endl<<"enter a choice : ";
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<endl<<"enter a :";
        cin>>a;
        cout<<endl<<"enter b :";
        cin>>b;
        cout<<endl<<"addition = "<<a+b;
        break;
        case 2 :
        cout<<endl<<"enter a :";
        cin>>a;
        cout<<endl<<"enter b :";
        cin>>b;
        cout<<endl<<"substraction = "<<a-b;
        break;
        case 3 :
        cout<<endl<<"enter a :";
        cin>>a;
        cout<<endl<<"enter b :";
        cin>>b;
        cout<<endl<<"multiplication = "<<a*b;
        break;
case 4 :
        cout<<endl<<"enter a :";
        cin>>a;
        cout<<endl<<"enter b :";
        cin>>b;
         d=(float)a/b;
        cout<<endl<<"division = "<<d;
        break;
    
    default:
        cout<<endl<<"enter a valid statment;";
    }

return 0;
}