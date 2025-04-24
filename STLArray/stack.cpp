#include<iostream>
#include<stack>
using namespace std;
int main(){ 
    stack<string> s;
    s.push("shayaba");
    s.push("sakshi");
    s.push("vandu");
    cout<<"top element "<<s.top()<<endl;
    s.pop();
    cout<<"top element "<<s.top()<<endl;
    cout<<"size of stack"<<s.size()<<endl;
    cout<<"empty or not"<<s.empty()<<endl;
    return 0;
}