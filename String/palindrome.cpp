#include<iostream>
using namespace std;
bool check_palindrome(char a[], int n){
    int s =0;
    int e = n-1;
    while(s<=e){
        if(a[s] != a[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
// int reverse(char name[] , int n){
//     int s =0;
//     int e =n-1 ;
//     while(s< e ){
//         swap(name[s++] ,name[e--]);
//     }
    
// }
int getLength( char name[]){
    int count =0;
    for(int i =0; name[i] != '\0' ;i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;

    cout<<"your name is  ";
    cout<<name <<endl;
    int length = getLength(name);
    cout<<"length:"<<length<<endl;
    // reverse(name , length);
    // cout<<"the reverse name is:"<<name<<endl;
    cout<<"the palindrome string is yes or no  "<<check_palindrome(name , length)<<endl;
    return 0;
}