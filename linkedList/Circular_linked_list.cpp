#include <iostream>
#include <map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    // constructor

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int ele, int d)
{
    //    empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        // assuming that the element is present in the list
        Node *curr = tail;
        while (curr->data != ele)
        {
            curr = curr->next;
        }
        // element found  -> curr is representing element value node;
        Node *temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(Node *&tail)
{
    if (tail == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "list is empty , please chekck again" << endl;
        return;
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // one node linked list
        if(curr == prev ){
            tail = NULL;
        }
        // >2 Node linked list
       else if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }

}

void splitList(Node* head , Node** head1 , Node**head2){
    if(head == NULL) return ;

    Node* slow = head;
    Node* fast = head;
    // Use slow-fast to find middle
    while (fast->next != head && fast->next->next != head) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // For even nodes, move fast one more step
    if (fast->next->next == head)
        fast = fast->next;

    // Set heads of the two halves
    *head1 = head;
    *head2 = slow->next;

    // Make first half circular
    slow->next = *head1;

    // Make second half circular
    fast->next = *head2;

}

// bool isCirculer( Node* head){
//     if(head == NULL){
//         return NULL;
//     }
//     Node* temp = head -> next;
//     while(temp != NULL && temp != head){
//         temp = temp -> next;
//     }

//     if(temp == head){
//         return true;
//     }
//     return false;
// }

// bool detectLoop(Node* head){
//     if(head == NULL)
//         return false;
//     map<Node*, bool> visited;
//     Node* temp= head;
//     while(temp != NULL){
//         if(visited[temp] == true){
//             return 1;
//         }
//         visited[temp] = true;
//         temp = temp->next;
//     }

// }
int main()
{
    Node *tail = NULL;
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    // print(tail);
    insertNode(tail, 5, 7);
    // print(tail);
    insertNode(tail, 7, 8);
    print(tail);
    // insertNode(tail, 8, 9);
    // print(tail);
    // insertNode(tail, 3, 4);
    // print(tail);
    // cout << tail->data << endl;
   
    // deleteNode(tail, 3);
    // print(tail);
    // if(isCirculer(tail)){
    //     cout<<"linked list is circuler in nature"<<endl;
    // }
    // else{
    //     cout<<"not";
    // }
   Node* head1 = NULL;
    Node* head2 = NULL;

    splitList(tail->next, &head1, &head2);

    cout << "First half: ";
    print(head1);
    cout<<"head1 is "<<head1->data <<endl;

    cout << "Second half: ";
    print(head2);
    cout<<"head2 is "<<head2->data;


}