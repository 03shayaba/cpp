#include <iostream>
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
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
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
Node* reverseNode(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = NULL;

    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
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
int main()
{
    Node *node1 = new Node(30);
    // creating node

    Node *head = node1;
    Node *tail = node1;
    print(head); // 30
    // insert at ending---------------
    insertAtTail(tail, 12);
    print(head); // 30 12
    insertAtTail(tail, 15);
    print(head); // 30 12 15

    // nisert at position
    insertAtTail(tail, 22);
    print(head);
    cout << head->data << endl;

   head = reverseNode(head);
   cout<<"reverse linked list:";
   print(head);

   cout<<endl<<head->data<<endl;
   return 0;
}