#include<iostream>
using namespace std;
void sorted_array( int *arr, int n ){
    // base case
    if(n == 0 || n ==1)
        return ;
    // case solve largest element ko  end me rakh dega 
    for(int i = 0; i<n-1 ; i++){
        if(arr[i]> arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }
    sorted_array(arr , n-1);
}
int main(){
    int arr[6]  = {1, 4, 8, 6,2,3};
    sorted_array(arr , 6);
    for(int  i =0 ; i<6 ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}