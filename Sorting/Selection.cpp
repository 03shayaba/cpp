#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {64,35,89,76,11,2};
    
    for(int i = 0; i<n;i++){
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[minIndex]>arr[j]){
                minIndex = j ;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
    for(int i= 0; i<n ; i++){
        cout<<arr[i]<<endl;
    }
}