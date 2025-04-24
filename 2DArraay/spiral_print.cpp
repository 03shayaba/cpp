#include<iostream>
using namespace std;
 int spiral_order(int arr1[][4]){
    int rows = sizeof(arr1) / sizeof(arr1[0]);
    int cols = sizeof(arr1[0])/ sizeof(arr1[0][0]);
    int count =0;
    int total = rows*cols;

    int temp[4][4] = {0};
    int starting_row = 0;
    int Starting_col =0;
    int ending_row = rows - 1;
    int ending_col  = cols -1;
    while(count < total){
        //printing starting row;
         for(int index = Starting_col ; index<ending_col ; index++){
                temp = arr[Starting_col][index]
         }
    }
 }
int main(){
    int arr[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    for(int i =0; i<4;i++){
        for(int j =0 ; j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // // total no of rows
    // int rows = sizeof(arr) / sizeof(arr[0]);
    // // total no of columns
    // int cols = sizeof(arr[0])/ sizeof(arr[0][0]);
    // cout << "Number of rows: " << rows << endl;
    // cout << "Number of columns: " << cols << endl;
  
  spiral_order(arr);
    return 0;
}