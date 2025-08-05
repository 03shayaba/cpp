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
void inserAtHead(Node* &head , int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;

}
void print(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* solve(Node *&first, Node *&second)
{
    Node *curr1 = first;
    Node *next1 = curr1->next;
    Node *temp = second;
    Node *next2 = temp->next;
    while (next1 != NULL && temp != NULL)
    {
        if ((temp->data >= curr1->data) && (temp->data <= next1->data))
        {
            curr1->next = temp;
            next2 = temp->next;
            temp->next = next1;
            curr1 = temp;
            temp = next2;
        }

        else
        {
            curr1 = next1;
            next1 = next1->next;
            if(next1 == NULL){
                curr1 ->next = temp;
                return first;
            }
        }
    }
    return first;
}
Node* Merge_Two_list(Node *&first, Node *&second)
{
    if (first == NULL)
    {
        return second;
    }
    if (second == NULL)
    {
        return first;
    }
    if (first->data <= second->data)
    {
      return  solve(first, second);
    }
    else
    {
       return  solve(second, first);
    }
}
int main()
{
    // creating dynamically object
    Node *node1 = new Node(5);
    Node *node2 = new Node(5);
    // creating node
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node* first =node1;
    Node* second = node2;

    inserAtHead(first ,3 );
    inserAtHead(first ,1 );
    inserAtHead(second,4);
    inserAtHead(second , 2);
    print(first);
    print(second);


    first = Merge_Two_list(first, second);
    print(first);
    return 0;
}