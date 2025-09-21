#include<iostream>
#include<stack>
using namespace std; 
string process(string s){
    stack<char> st ;
    for( int i = 0 ; i<s.size() ; i++){
         if(s[i] == '#'){
            if(!st.empty()){
                st.pop();
            }
         }else{
            st.push(s[i]);
         }
    }
    string result = "";
    while(!st.empty()){
        result += st.top();
        st.pop(); 
    }

    return result;
}

bool backspace_String(string s, string t){
    return process(s) == process(t);
}
int main(){

    string s = "ab#c" ;
    string t ="ad#c";

    cout<<(backspace_String(s,t)? "true" : "false" )<<endl; 
    return 0;
}