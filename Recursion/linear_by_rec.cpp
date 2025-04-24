#include<iostream>
using namespace std;
void print(int arr[] , int n){
    cout<<"size of the array is"<<n<<endl;
    for(int i =0 ; i<n ; i++){
        cout<<arr[i] <<" ";

    }cout<<endl;
}

bool Is_linear(int *arr , int size,int key){
    print(arr , size);
    if(size == 0){
        return false ;
    }
    if( key == arr[0]){
        return true;
    }
    else{
    int remaining = Is_linear(arr+1 , size - 1, key);
    
    return  remaining;
    }
}
int main(){
    int arr[5] = { 2, 9,4,5,6};
   int size = 5;
   int key = 2 ;
    bool ans = Is_linear(arr , size , key);
   if(ans){
    cout<<"Present" <<endl;
   }else{
    cout<<"absent " <<endl;
   }
}