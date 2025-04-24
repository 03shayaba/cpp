#include<iostream>
#include<math.h>
#include<limits.h>
using namespace std;

    int reverse(int x) {
       int digit = 0;
       long  rev = 0;
       while(x!=0){
        digit = x%10;
        x/=10;
        
        if(rev > INT_MAX||(rev == INT_MAX/10 && digit > 7))
        {
            return 0;
        }
        if(rev < INT_MIN||(rev == INT_MIN/10 && digit < -8))
        {
            return 0;
            }
         rev = rev*10 + digit;   
       }
       return rev;
    }  
int main(){
    int n;
    cin>>n;
    reverse(n);
};