#include<iostream>
using namespace std; 
void insertion_sort(int * arr , int n){
    if(n ==0 || n==1){
        return ;
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