#include<iostream>
#include<stack>
using namespace std;

class Stack{
    public:
        int *arr;
        int top ;
        int size;
        Stack(int size){
            this->size = size;
            arr = new int[size];
            top =-1;
        }
    
    void push(int element){
        if(size - top>1){
            top++;
            arr[top] = element;
        }else{
            cout<<"Stack Overflow" <<endl;
        }
    }
    void pop(){
        if(top >=0){
            top--;
        }else{
            cout<<"stack underflow" <<endl;
        }
    }
    int peek(){
        if(top>=0 )
            return arr[top];
        else{
            cout<<"stack is empty"<<endl;
        }
    }

    bool is_Empty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
    }
};
int main(){
    Stack st(5);
    st.push(22);
    st.push(40);
    st.push(44);
    cout<<st.peek() <<endl;
    st.pop();
    cout<<st.peek() <<endl; 
    st.pop();

    cout<<st.peek() <<endl;
    st.pop();
    if(st.is_Empty()){
        cout<<"Stack is empty"<<endl;
    }else{
        cout<<"stack is  not empty"<<endl;
    }
    return 0;
}