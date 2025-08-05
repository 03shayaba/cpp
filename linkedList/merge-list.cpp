#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(Node *&head, int d)
{
    // create new node
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void inserAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
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
Node *SortList(Node *head)
{
    Node *zerohead = new Node(-1);
    Node *zerotail = zerohead;
    Node *onehead = new Node(-1);
    Node *oneTail = onehead;
    Node *twoHead = new Node(-1);
    Node *twotail = twoHead;

    Node *curr = head;
    while (curr != NULL)
    {
        
        if (curr->data == 0)
        {
            zerotail->next = curr;
            zerotail = curr;
        }
        else if (curr->data == 1)
        {
           oneTail->next = curr;
            oneTail = curr;
        }
        else if (curr->data == 2)
        {
            twotail->next= curr;
            twotail = curr;
        }
        curr = curr->next;
    }
    // merging the 3 lists
    zerotail->next = (onehead->next) ? onehead->next : twoHead->next;
    oneTail->next = twoHead->next;
    twotail->next = NULL;
     // new head is dummyZero->next
    Node* newHead = zerohead->next;
    delete zerohead;
    delete onehead;
    delete twoHead;

    return newHead;
}




int main()
{
    // creating dynamically object
    Node *node1 = new Node(0);
    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head, 1);
    inserAtTail(tail, 0);
    inserAtTail(tail, 1);
    inserAtTail(tail, 0);
    inserAtTail(tail, 2);
    inserAtTail(tail, 2);
    cout << tail->data << endl;
      cout << "Original List: ";
    print(head);
    // creating node
     head = SortList(head);

    cout << "Sorted List: ";
    print(head);

    return 0;
}