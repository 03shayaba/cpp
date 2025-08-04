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

    // destructure
    ~Node()
    {
        int value = this->data;
        // if(this->next != NULL){
        //     delete next;
        //     this->next = NULL;
        // }
        cout << " memory is free for the node with data" << value << endl;
    }
};
void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
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
// sorted linked list pass to the function
Node *removeDuplicate(Node *head)
{
    if (head == NULL)
        return NULL;

    // non empty list
    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node *node_to_delete = curr->next;
            delete (node_to_delete);
            curr->next = next_next;
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}

// unsorted linked list pass to the  function
Node* unSorted_duplicate(Node *&head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        Node *prev = curr;
        Node *temp = curr->next;
        while (temp != NULL)
        {
            if (curr->data == temp->data)
            {

                prev->next = temp->next;
                delete temp;
                temp = prev->next;
            }
            else
            {
                prev = temp;
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
    return head;
}

int main()
{
    Node *node1 = new Node(3);   //3
    Node *head = node1;
    insertAtHead(head, 2);         //2 3
    insertAtHead(head, 4);
    insertAtHead(head, 3);
    insertAtHead(head, 2);
    print(head);

    // head = removeDuplicate(head);
    // print(head);

    head = unSorted_duplicate(head);
    print(head);
    return 0;
}