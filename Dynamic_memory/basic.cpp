#include<iostream>
using namespace std;

int get_sum(int *arr , int n ){
    int sum = 0;
    for(int i = 0 ; i< n ; i++){
       sum += arr[i];
    }
    return sum;
}
int main(){
    // char ch = 's';
    // cout <<"size of "<< sizeof(ch) <<endl;
    // char* c = &ch ;
    // cout<< sizeof(c) <<endl;  //pointer size  8 or 4 depend on your s/m


    int n ;
    cout<<"enter size of array"<<endl;
    cin>> n ;
    // variable size  of array
    cout<<"enter ele of array"<<endl;
    int *arr =  new int[n];
    for(int i = 0 ; i< n ; i++){
        cin >> arr[i];
    }
    int ans = get_sum(arr , n);
    cout <<"answer is  " <<ans <<endl;
return 0;
}