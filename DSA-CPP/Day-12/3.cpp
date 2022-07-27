// swapping of number ....

#include<iostream>
using namespace std;
void swap( int *a,int *b){
swap(*a,*b);
}


int main (){
    int a=5;
   int b=6;
    int *pa=&a;
    int *pb=&a;
    swap(&a,&b);
    cout<<endl<<"this is our pointer a "<<a;
    cout<<endl<<"this is our pointer b "<<b;

}