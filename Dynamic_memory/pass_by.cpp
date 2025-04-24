#include<iostream>
using namespace std;

// int& func(int n){
//     int num = n ;
//     int &ans  = num ;
//     return ans;  // can cAUSe an error because of local variable
// }

// int* func(int n){
//     int* ptr= &n ;
//     
//     return ptr;  // can cAUSe an error because of local variable
// }

 
// void update(int& n ){
//     n++;
// } 
int main(){
    // int  i =5;
    // int &j  = i;
    // cout<<"Before"<<endl;
    // cout<<i <<endl;
    // cout<<j <<endl ;
    // update(i);
    // cout<<"after"<<endl;
    // cout<<i <<endl;
    // cout<<j <<endl ;


    int n ;
    cout<<"enetre array size "; 
    cin>>n ; //bad practice to inisialize the array;
    int arr[n] = {1,2,3,4,5,6} ;
       
       for(int  i= 0; i <n ; i++){
        cout<<arr[i];
       }
    return  0;
}