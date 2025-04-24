#include<iostream>
using namespace std;
int main(){
    int arr[6] = {16,90,67,4,6,1};
    for(int i=0; i<6 ; i++){
        int temp = arr[i];
        int j = i-1;
        for(; j>=0;j--){
            if(arr[j]>temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1 ] = temp;
    }
    for(int i= 0; i<6;i++){
    cout <<"the sorted array is"<<arr[i]<<endl ;
    }
    return 0;
}