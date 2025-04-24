#include<iostream>
using namespace std;
inline int getmax(int& a , int& b){
    return (a>b)?a : b ;
}
int main(){
    int  a = 3;
    int b =2;
    int ans = getmax(a ,b );
    cout<<a <<"and " <<b <<endl;
    cout<<ans <<endl;
    a = a+ 1;
    b = b+8;
     ans = getmax(a,b);
    cout<<a <<"and " <<b <<endl;
    cout <<ans <<endl;
}