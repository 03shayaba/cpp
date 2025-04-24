#include<iostream>
using namespace std;
  bool isPalindrome(int y) {
     int x = y;
     int rem = 0;
     int rev = 0;
     while(y>0){
        
        rem = y%10;
        rev = rev*10 +rem;
        y/=10;
        }
        cout<<"rev"<<endl<<rev<<endl;
        if( x == rev ){
            cout<<"palindrome";
            // return 1 ;
        }   
        else{
            cout<<"not palindrome";
            // return -1;
        }
    }
int main(){
    int z;
cout<<"enter a number:";
cin>>z;
isPalindrome(z);
// int y;
// cout<<"enter a number"<<endl;
// cin>>y;
// int rev=0,rem;
// int original = y;
// while(y>0){
//     rem = y%10;
//     rev = rev*10 +rem;
//     y/=10;
// }
// if(original == rev){
//     cout<<"palindrome"<<endl;
// }

// else{
//     cout<<"not palindrome";
// }
// return 0;
}