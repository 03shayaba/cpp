#include<iostream>
using namespace std;
int  linear_search( int arr[],int n,int m){
    for(int j = 0; j < 5;j++){
        if(arr[j] == n){
            return j;
        }
    }
    return -1;
}
int main(){
     int arr[5],m;
     cout <<"enter the item :" ;
     cin >>m ;
     for(int i = 0; i < 5; i++)
    {
    cout << "enter the of array:";
    cin >> arr[i] ;
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    int ans = linear_search(arr ,n,m);
    cout << ans; 
    }
