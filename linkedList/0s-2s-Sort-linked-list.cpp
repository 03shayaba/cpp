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

// approch 1 with data replacement
// Node *sortList(Node *head)
// {
//     int zeroCount = 0;
//     int oneCount = 0;
//     int twoCount = 0;

//     Node *temp = head;
//     while (temp != NULL)
//     {
//         if (temp->data == 0)
//         {
//             zeroCount++;
//         }
//         else if (temp->data == 1)
//         {
//             oneCount++;
//         }
//         else if (temp->data == 2)
//         {
//             twoCount++;
//         }
//         temp = temp->next;
//     }
//     temp = head;
//     while (temp != NULL)
//     {
//         if (zeroCount != 0)
//         {
//             temp->data = 0;
//             zeroCount--;
//         }
//         else if (oneCount != 0)
//         {
//             temp->data = 1;
//             oneCount--;
//         }
//         else if (twoCount != 0)
//         {
//             temp->data = 2;
//             twoCount--;
//         }
//         temp = temp->next;
//     }
//     return head;
// }
// approach2 without data replacement

void insertAt(Node *&tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}
Node *sortList(Node *head)
{
    // dummy node
    Node *zerohead = new Node(-1);
    Node *zeroTail = zerohead;
    Node *onehead = new Node(-1);
    Node *oneTail = onehead;
    Node *twohead = new Node(-1);
    Node *twoTail = twohead;

    Node *curr = head;
    // create seprate list 0s 1s  and 2s
    while (curr != NULL)
    {
        Node* nextNode = curr->next; // save next node
    curr->next = NULL;   
        int val = curr->data;

        if (val == 0)
        {
            insertAt(zeroTail, curr);
        }
        else if (val == 1)
        {
            insertAt(oneTail, curr);
        }
        else if (val == 2)
        {
            insertAt(twoTail, curr);
        }
        curr = nextNode;
    }

    //    merge lists
    // 1s list is not empty
    if (onehead->next != NULL)
    {
        zeroTail->next = onehead->next;
    }
    else
    {
        zeroTail->next = twohead->next;
    }

    oneTail->next = twohead->next;
    twoTail->next = NULL;
    head = zerohead->next;
    delete zerohead;
    delete onehead;
    delete twohead;
    return head;
}
int main()
{
    // creating dynamically object new Node
    Node *node1 = new Node(2);
    // creating node

    Node *head = node1;
    Node *tail = node1;
    // print(head);   //30
    // insert at ending---------------
    insertAtTail(tail, 0);
    // print(head);            //30 12
    insertAtTail(tail, 2);
    insertAtTail(tail, 1);
    insertAtTail(tail, 0);
    insertAtTail(tail, 2);
    print(head);
    head = sortList(head);
    print(head);
    return 0;
}