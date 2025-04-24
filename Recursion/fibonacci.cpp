#include<iostream>
using namespace std;
int fib(int n){
    if(n == 0){
        return  0;
    }
    if(n == 1){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}
// here 0 is 0th term and 1 is 1st term 
int main(){
    int n; 
    cout<<"enter number you want :";
    cin>>n;
    // int ans = fib(n);
    cout<<"fibonacci series is :"<<fib(n) ;
    return 0;
}