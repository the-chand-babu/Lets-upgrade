//addition of 2 matrix
#include<iostream>
using namespace std;


// input taking ....
void inputtaking (int **matrix1, int n){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin>>matrix1[i][j];
            }
        }
}
    void print(int **matrix, int n ){
            for(int i = 0; i < n; i++){
                for(int j = 0; j< n; j++){
                    cout<<matrix[i][j]<<" ";
                }
                cout<<endl;
            }
    }

int main (){
    
    int n;
    cin>>n;
    int **matrix1= new int *[n];
    for(int i = 0; i < n; i++){
         matrix1[i]= new int[n];
    }
    // cout<<"enter row for second matrix";
    // int n2;
    // cin>>n2;
    // int **matrix2 = new int*[n];
    // for(int i =0; i < n2; i++){
    // matrix2[i] = new int[n2];
    // }



    inputtaking(matrix1,n);
    // cout<<"enter data for second matrix"<<endl;
    // inputtaking(matrix2,n2);


        print (matrix1,n);
        cout<<endl;
        // print(matrix2,n2);

cout<<"enter a data for nd matrix"<<endl;
int **matrix2 = new int*[n];
for(int i = 0; i< n; i++){
    matrix2[i]=new int[n];
}

    inputtaking(matrix2,n);
        print(matrix2,n);

int **c = new int*[n];
for(int i = 0; i < n; i++){
        c[i]= new int [n];
}

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = matrix1[i][j]*matrix2[i][j];
        }
    }
cout<<endl;
    print(c,n);



}