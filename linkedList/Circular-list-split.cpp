#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class CircularList
{
    Node *head;
    Node *tail;

public:
    CircularList()
    {
        head = tail = NULL;
    }

    void insertAt_head(int val)
    {
        Node *newNode = new Node(val);

        if (tail == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }
    void print()
    {
        if (head == NULL)
            return;
        cout << head->data << "->";
        Node *temp = head->next;
         while (temp != head)
            {
                cout << temp->data << "->";
                temp = temp->next;
            }
        cout << temp->data <<endl;
    }
    
};
int main()
{
    CircularList cll;
    cll.insertAt_head(3);
    cll.insertAt_head(2);
    cll.insertAt_head(7);
    cll.insertAt_head(8);
    cll.print();
    return 0;
}