#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int> st ;
st.push(4);
st.push(3);
st.push(2);
st.push(1);
st.push(8);

int ele = 2;
cout<<st.top()<<endl;
    stack<int> temp;

    // Transfer elements to temp
    while(!st.empty()){
        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }
    
    // Insert element at bottom
    st.push(ele);

        // Push back all elements from temp
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    //    // 🔹 Now display all elements

    cout <<"stack elements from top to bottom"<<endl;

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    cout<<endl;
}