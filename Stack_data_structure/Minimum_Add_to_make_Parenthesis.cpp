#include<iostream>
#include<stack>
#include<string>
using namespace std;
int count_parentesis(string str){
    stack<char> s;
    int count = 0;
    for(int i =0 ; i<str.size() ; i++){
        if(str[i] == '('){
            s.push(str[i]);
           
        }else{
           if(s.empty()){
            count++;
           }else{
            s.pop();
           }
        }
        
    }
    // why we return the size and cont because of )))()(((
    return s.size()+count;
}

int main(){
    

    string str = "((()";
    int result = count_parentesis(str);
    cout<<"the parenthesis is needed:" <<result ;
    
}