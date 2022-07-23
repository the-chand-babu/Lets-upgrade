// wave printing means top to bottom and bottom to top..
//issue ...

#include<iostream>
 using namespace std;
 void waveprinting (int arr[][3], int n){
        int startingcol=0;
        int endingCol=3-1;
        int startrow=0;
        int endingRow=n-1;
        int count = 0;
        int total = 3*n-1;

        while (count<=total){
            //case odd 
            if( startingcol&1==1){
                for(int index=startrow&&count<=total; index <=endingRow; index++){
                    cout<<arr[startingcol][index];
                }startingcol++;
                else if (startingcol&1==0){
                    for(int index = endingRow&&count<=total; index <=startrow; index--){
                        cout<<arr[startingcol][index];
                    }startingcol++;
                }
            }
        }
 }

 int  main (){
    int arr[3][3];
    for( int i = 0; i < 3; i++){
        for ( int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }
    waveprinting(arr,3);
 }