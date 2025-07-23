#include<iostream>
using namespace std;
class Node{
 public:
  int data ;
  Node* next;
  Node(int val){
    data = val;
    next = NULL;
  }
};
class Stack{
    private:
    Node* top;
    public:
    Stack(){
        top = NULL;
    }

void push(int val){
    Node* newNode = new Node(val);
    newNode->next = top ;
    top = newNode;
}
void pop(){
    if(isEmpty()){
        cout<<"stack is underflow";
        return;
    }
    Node* temp = top;
    top = top->next;
    delete temp ;
}
// Peek (Top element)
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty\n";
            return -1;
        }
        return top->data;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == NULL;
    }
    // Display stack
    void display() {
        Node* curr = top;
        cout << "Stack (top to bottom): ";
        while (curr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
};
int main(){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();  // Output: 30 20 10

    cout << "Top: " << s.peek() << endl; // Output: 30

    s.pop();
    s.display();  // Output: 20 10

    cout << (s.isEmpty() ? "Empty" : "Not empty") << endl;
    return 0;
}