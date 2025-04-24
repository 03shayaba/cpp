#include<iostream>
using namespace std;
void wave_print(int arr[][4] , int row , int col){
    for(int i = 0 ; i<col ; i++){
        if(i&1){
            // odd index --> Bottom To Top
            for(int j = row - 1 ; j>=0; j--){
                cout<<arr[j][i]<<" ";
            }
        }
        else{
            //even index --> Top to Bottom
            for(int j = 0 ; j<row ;j++){
                cout<<arr[j][i]<<" ";
            }
        }
    }
}
int main(){
    int arr[4][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    for(int i =0; i<4;i++){
        for(int j =0 ; j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    wave_print(arr , 4,4);
    return 0;
}