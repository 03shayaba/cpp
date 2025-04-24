#include<iostream>
using namespace std; 
void insertion_sort(int * arr , int n){
    for(int  i = 0 ; i<n ; i++){
        int temp = arr[i];
        int j= i-1;
        for( ; j>=0; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
} 
int main(){
    int arr[5] = { 2 , 9, 7, 8, 4};
    insertion_sort( arr , 5);
    for(int i =0 ; i<5 ; i++){
    cout<<arr[i] <<" ";
    }
    return 0;
}