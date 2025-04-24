#include<iostream>
using namespace std;
int fact(int n){
    int fact = 1;
 for(int i = 1 ; i <= n; i++){
  fact = fact * i;
 }
 return fact;
}
int ncr(int n,int r){
    int nom = fact(n);
    int denom = fact(r) * fact(n-r);
    int ncr = nom /denom ;
    return ncr;
}

int main(){
    int x,r;
cout<<"enter a Number";
cin>>x >>r;
int result = ncr( x,r);
cout<<"result is "<<x<<"C"<<r <<" " <<"is"<<" "<<result;
}