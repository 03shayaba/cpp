#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    // constructor

    Node(int d){
       this -> data = d;
       this -> prev = NULL;
       this -> next = NULL;

    }
    ~Node(){
        int value = this-> data;
        if(next!=NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory free for node with data "<<value<<endl;
    }


};
void print(Node* & head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp ->data <<" ";
        temp = temp-> next;
    }
    cout <<endl;
}
int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp-> next;
    }
   return len;
}
void insertAtHead(Node* &head ,Node* &tail, int d){
    Node * temp = new Node(d);
    if(head == NULL){
        
        head = temp;
        tail = temp;
    }else{
    // Node* temp = new Node(d);
    temp -> next = head ;
    head->prev = temp ;
    head = temp;}
}

void insertAtTail(Node* &head,Node* &tail ,int d){
    Node * temp = new Node(d);
    if(tail == NULL){
        head = temp;
        tail= temp;
       
    }else{
    // Node * temp  = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
}
void insertAtposition(Node* &head , Node* &tail,int pos ,int d ){
    if(pos == 1){
        insertAtHead(head,tail , d);
        return;
    }
    Node* temp = head;
    int cnt = 1;

    while(cnt<pos-1){
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if(temp -> next == NULL){
        insertAtTail(head,tail , d );
        return ;
    }

    // creating a node for d
    Node * nodeToinsert = new Node(d);
    nodeToinsert-> next = temp->next;
    temp->next->prev=nodeToinsert;
    temp-> next = nodeToinsert;
    nodeToinsert->prev = temp;
}


// deletion in linked list
void deletion(int position,Node* &head ,Node* &tail){
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        // deleting first node
        head = temp->next;
        // memory free start node
        temp->next = NULL;
        delete temp;
    }else{
        // deleting any middle or last node
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        
       curr->prev = NULL;
        prev->next = curr-> next;
        curr->next = NULL;
        delete curr;
        // if(prev->next == NULL){
        //     tail = prev;
        // }
    }
    
}

int main(){
// Node* node1 = new Node(10);

Node* head = NULL;
Node* tail = NULL;
print(head);
cout<<"Length : "<<getLength(head) <<endl;
insertAtHead(head,tail ,11);
print(head);
insertAtHead(head,tail ,19);
print(head);
insertAtHead(head,tail ,16);
print(head);
cout<<"head " <<head-> data <<endl;
cout<<"tail:" <<tail-> data <<endl;

insertAtTail(head,tail ,13);
print(head);
cout<<"head " <<head-> data <<endl;
cout<<"tail:" <<tail-> data <<endl;
// insertAtTail(tail ,12);
// print(head);
insertAtposition(head,tail ,1,105);
print(head);
cout<<"head " <<head-> data <<endl;
cout<<"tail:" <<tail-> data <<endl;
insertAtposition(head,tail ,4,101);
print(head);
cout<<"head " <<head-> data <<endl;
cout<<"tail:" <<tail-> data <<endl;
deletion(4 , head , tail);
print(head);

}