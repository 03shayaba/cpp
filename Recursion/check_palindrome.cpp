#include<iostream>
using namespace std;
bool check_Palindrome(string str , int s , int e  ){
    if(s > e){
        return true;
    }
    if(str[s] != str[e]){
        return false;
    }else{
        return check_Palindrome(str , s+1 , e-1);
    }

}
int main(){
    string name = "abcdba";
    cout <<endl;
    bool isPalindrome = check_Palindrome(name , 0 , name.length() - 1);
    if(isPalindrome){
        cout<<"Its a Palindrome" <<endl;
    }else{
         cout<<"Its  not a Palindrome" <<endl;
    }
    return 0;
}