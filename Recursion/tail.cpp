#include<iostream>
using namespace std;
void print(int num){
    // base case
    if(num == 0)
        return ;

    // processing case is above so that it is tail rec if it is bellow to recusive case then it is head recursion
    cout << num <<endl;
    // recursive /general case
    print(num-1);
}
int main(){
    int n ;
    cout<<"enter number :";
    cin>> n;
     print(n);
    
    return  0;
}