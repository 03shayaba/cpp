#include<iostream>
using namespace std;
void sorted(int *arr , int n){
    for(int  i =0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1 ; j<n; j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
    }
   
}
int main(){
    int arr[5] = {33,5,23,4,21};
    sorted(arr , 5);
    for(int i =0 ; i<5 ; i++){
    cout<<arr[i] <<" ";
    }
    return 0;
}