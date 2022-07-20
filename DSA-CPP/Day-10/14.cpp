#include<iostream>
using namespace std;
void Pos_Neg_zero (int arr[],int size){
    int posi=0,neg=0,zero=0;
    for(int i = 0; i < size; i++){
        if(arr[i] > 0){
            posi++;
        }else if (arr[i] < 0){
            neg++;
        }else{
            zero++;

        }
    }
    cout<<endl<<"this is positive number : "<<posi;
    cout<<endl;
    cout<<endl<<"this is negetive number : "<<neg;
    cout<<endl;

    cout<<endl<<"this is zero number : "<<zero;



}

void isEven (int arr[],int size){
    int even=0;
int odd=0;
    for(int i = 0; i < size; i++){
        if(arr[i]==0){
            continue;;
        }
       else if(arr[i]&1==1){
            odd++;
        }else{
            even++;
        }
    }
    cout<<endl<<"this is even number : "<<even;
        cout<<endl<<"this is odd number : "<<odd;
}
int toatal_element (int arr[],int size){
    int total=0;
    for( int i = 0; i < size; i++){
        total=total+arr[i];
    }
    return total;
}

int main (){
    int arr[10],i,size;
    cout<<endl<<"enter a size : ";
    cin>>size;

    for(i = 0; i < size; i++){
        cout<<endl<<"enter a array element : ";
        cin>>arr[i];

    }
    int total=toatal_element(arr,size);
    cout<<endl<<"this is total :"<<total;
    isEven(arr,size);

    Pos_Neg_zero(arr,size);
}