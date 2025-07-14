#include <iostream>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~Node()
    {
        int value = this->data;
        // memory free
       
        cout << "Memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node *&head, int d)
{
    // create new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void insertAt_Position(Node *&tail, Node *&head, int position, int d)
{
    // inserting at 1st position
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *nodeToinsert = new Node(d);
    nodeToinsert->next = temp->next;
    temp->next = nodeToinsert;
}

// how to traverse linked list
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next; // increasing by 1 of the list
    }
    cout << endl;
}

Node * uniqueSortedList(Node* head){
    // empty List 
    if (head == NULL){
        return NULL; 
    }
    Node* curr = head;
    while(curr!= NULL){
        if((curr->next != NULL) && (curr->data == curr -> next -> data)){
            Node* next_next = curr-> next -> next;
            Node* node_to_delete = curr->next;
            delete(node_to_delete);
            curr->next = next_next;
        }
        else{
            curr = curr->next;
        }
    }
    return head;
}

int main()
{
    // creating dynamically object new Node
    Node *node1 = new Node(2);
    // creating node

    Node *head = node1;
    Node *tail = node1;
  
    // insert at ending---------------
    insertAtTail(tail, 3);
           //3 5
    insertAtTail(tail, 5);
    
    insertAt_Position(tail, head, 3, 3);
    
    print(head);
    // tail->next = head->next;
    // cout << "head" << head->data << endl;
    // cout << "tail " << tail->data << endl;
    head = uniqueSortedList(head);
    print(head);
    // return 0;
}