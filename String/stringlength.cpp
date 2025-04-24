#include<iostream>
using namespace std;
bool  check_length(string s){
    cout<<"the length is: ";
    cout<<s.length();
    
}
int main(){
    string text ;
    cout<<"enter the string a:"<<endl;
    cin>>text;
    check_length(text);
    return 0;
}