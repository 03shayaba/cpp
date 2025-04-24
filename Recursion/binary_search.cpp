#include<iostream>
using namespace std;
bool binary_search(int * arr , int s , int e , int k){
    if(s>e)
        return -1;
    
    int mid = s + (e - s)/2;

    if(arr[mid] == k){
        return true;
    }
 
    if(arr[mid] <k){
        return binary_search(arr , mid+1 , e , k);
    }
    else{
        return binary_search(arr , s , mid - 1, k);
    }
}
int main(){
    int arr[5] = { 2, 4,5, 8,3};
    int start = 0;
    int key =  4;
    int end = sizeof(arr) - 1;
    bool ans = binary_search(arr , start ,end ,key);
    if(ans){
        cout<<"present"<<endl;
    }else{
        cout<<"absent"<<endl;
    }
    return 0;
}