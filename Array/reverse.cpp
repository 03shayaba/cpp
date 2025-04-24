#include<iostream>
using namespace std;
int main(){
    int arr[5] ={1,2,3,4,5};
    for(int i=0 ;i<5;i++){
        cout <<arr[i]<<" ";
        cout << endl;
    }
    int temp=0;
    int start =0;
    int end = 4;
    while (arr[end] > arr[start]){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;      
        start ++;
        end --;
    }
    for (int i =0; i<5;i++){
        cout <<arr[i] <<" ";
    }
}