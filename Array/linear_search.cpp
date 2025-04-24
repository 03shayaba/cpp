#include<iostream>
using namespace std;
bool search(int arr[] , int size, int element){
    for(int i=0 ; i<size; i++){
        if (arr[i]==element){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[10] = {1,2,4,5,8,0,6,7,3,9};
    int size = 10;
    int key = 50;
    cout<<"the" <<key <<" " <<"element at index is found:"<<search(arr,size,key);
}