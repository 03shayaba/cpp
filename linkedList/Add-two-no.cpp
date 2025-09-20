#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node *&head, Node* &tail, int d)
{
    Node *temp = new Node(d);
    //    tail->next = temp;
    //    tail = temp ;
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next =    temp;
        tail = temp;
    }
}
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
Node *reverse(Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
// perform addition
Node *add(Node *first, Node *second)
{
    Node *ansHead = NULL;
    Node *ansTail = NULL;
    int carry = 0;
    while (first != NULL && second != NULL)
    {
        int sum = carry + first->data + second->data;
        int digit = sum % 10;

        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
        first = first->next;
        second = second->next;

    }
    while(first!= NULL){
        int sum = carry + first->data;
        int digit = sum%10; 
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        first = first->next;
    }
      while(second!= NULL){
        int sum = carry + second->data;
        int digit = sum%10; 
        insertAtTail(ansHead,ansTail,digit);
        carry = sum/10;
        second = second->next;
    }

    while(carry!=0){
        int sum  = carry ;
        int digit = sum%10;
        insertAtTail(ansHead,ansTail, digit);
        carry = sum/10;
    }
    return ansHead;
}

// Add tow numbers represented by linked list
Node *addTwoLists(Node *first, Node *second)
{
    // step->1  reverse input LL
    first = reverse(first);
    second = reverse(second);
    // step ->2 add 2 LL
    Node *ans = add(first, second);
    ans = reverse(ans);
    return ans;
}
int main()
{
    Node *node1 = new Node(3);
    Node *node2 = new Node(5);
    Node *head1 = node1;
    Node *head2 = node2;
    insertAtHead(head1, 4);

    insertAtHead(head2, 4);
    insertAtHead(head2, 3);
    print(head1);
    print(head2);
    head1 = addTwoLists(head1 , head2);
    print(head1);
    return 0;
}