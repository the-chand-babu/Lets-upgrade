// If the marks obtained by a student in five different subjects
// are input through the keyboard, find out the aggregate marks
// and percentage marks obtained by the student. Assume that
// the maximum marks that can be obtained by a student in each
// subject is 100.

#include<iostream>
using namespace std;
int main(){
    int max,agr,sub1,sub2,sub3,sub4,sub5,n;
    float per;
    
    cout<<endl<<"enter how many subject u have : ";
    cin>>n;

    cout<<endl<<"enter a subject 1 : ";
    cin>>sub1;

    cout<<endl<<"enter a subject 2 : ";
    cin>>sub2;

    cout<<endl<<"enter a subject 3 : ";
    cin>>sub3;

    cout<<endl<<"enter a subject 4 : ";
    cin>>sub4;

    cout<<endl<<"enter a subject 5 : ";
    cin>>sub5;

    agr=sub1+sub2+sub3+sub4+sub5;

    max=100*n;
    per=(float)agr/max*100;
    
    cout<<endl<<"this is a agr marks = "<<agr;

    cout<<endl<<"this is a per = "<<per;

    cout<<endl<<"this is a max marks = "<<max;
    
}