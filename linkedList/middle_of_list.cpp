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

int getLength(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp-> next;
    }
   return len;
}
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

// approach2 find middle
Node* getMiddle(Node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    if(head->next -> next == NULL){
        return head-> next;
    }
     Node* slow = head;
     Node* fast = head -> next;
     while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow->next;
     }
}
Node* findMiddle(Node* head){
    return getMiddle(head);
    /*
    int len = getLength(head);
    int ans = len/2;
    Node* temp = head ;
    int cnt = 0;
    while(cnt<ans){
        temp = temp->next;
        cnt++;
    }
    return temp;
    */
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
    // insertAtTail(tail, 23);
    // print(head);
    cout << head->data << endl;
    head = findMiddle(head);
    cout<<head->data;

   
   return 0;
}