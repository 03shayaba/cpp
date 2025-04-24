#include<iostream>
using namespace std;
bool isSorted(int *arr , int size){
    if(size == 0 || size == 1){
        return true;
    }
    if(arr[0] > arr[1]){
        return false;
    }
    else{
        int remaining_part = isSorted(arr+1 , size -1);
        return remaining_part;
    }
}
int main(){
   int arr[5] = { 2, 9,4,5,6};
   int size = 5;
   bool ans = isSorted(arr , size); 
   if(ans ){
    cout<<"array is sorted"<<endl ;
   }else{
    cout<<"array is not sorted" <<endl;
   }
}