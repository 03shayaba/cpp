#include<iostream>
using namespace std;
void say_digit(int n , string arr[]){
    if(n == 0){
        return ;
    }
    int digit = n%10 ;
    n = n/10;
    say_digit( n , arr);
    cout<<arr[digit] << " " ;
    }
int main(){
    string arr[10] = {"zeor" , "one" , "two" ,"three" ,"four","five", "six" ,"seven" , "eight" ,"nine"};
    int n ;
    cin>> n;
    say_digit(n , arr);
    cout <<endl <<endl;
    return 0;
}