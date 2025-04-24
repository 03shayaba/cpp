#include<iostream>
using namespace std;
int factorial(int num){
    // base case
    if(num == 0)
        return 1;
    // recursive /general case
    return num * factorial(num - 1) ;
}
int main(){
    int n ;
    cout<<"enter number :";
    cin>> n;
    int ans = factorial(n);
    cout<<"factorial of "<<n <<" number is :" <<ans ;
    return  0;
}