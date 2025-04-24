#include<iostream>
using namespace std;
char toLower(char ch){
    if(ch>='a' && ch<='z'){
    return ch;
    }
    else{
        char temp = ch -'A' +'a';
    }
} 
int main(){
    cout<<"Character is"<<toLower('b')<<endl;
    cout<<"Character is"<<toLower('C')<<endl;
    return 0;
}