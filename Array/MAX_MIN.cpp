#include<iostream>
#include<limits.h>
using namespace std;
int maximum(int arr[], int size){
     int min = INT_MIN;
    for(int i = 0 ; i<size ; i++){
        if(arr[i]>min){
            min = arr[i];
        }
    }
    return min;

}
int minimum(int arr[] ,int size){
     int max = INT_MAX;
    for(int i = 0 ; i<size ; i++){
        if(arr[i]<max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int size =10;
    int array[10] = {1, 5 ,6,34,98,-1,8,3,7,0};
    
     
   int res1= maximum(array , size);
   cout<<"the max element is "<<" "<<res1<<endl;
   int res2= minimum(array , size);
   cout<<"the min element is "<<" "<<res2<<endl;
    
}
