#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s;
    s.push(2);
    s.push(3);

    s.pop();
    cout<<"printing top element  " <<s.top() <<endl;
    if(s.empty()){
        cout<<"Stack is empty" <<endl;
    }else{
        cout<<"stack is not empty" <<endl;
    }
    return 0;
}