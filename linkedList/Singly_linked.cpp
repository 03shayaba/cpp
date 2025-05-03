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

// deletion in linked list
void deletion(int position, Node *&head, Node *&tail)
{
    if (position == 1)
    {
        Node *temp = head;
        // deleting first node
        head = head->next;
        // memory free start node
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle or last node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        if (prev->next == NULL)
        {
            tail = prev;
        }
    }
}

bool detectLoop(Node *head)
{
    if (head == NULL)
        return false;
    map<Node *, bool> visited;
    Node *temp = head;
    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "Cycle is preent at node" << temp->data << endl;
            return 1;
        }
        visited[temp] = true;
        temp = temp->next;
    }
}

Node *floyedDetectLoop(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            cout << "cycle is present " << slow->data << endl;
            return slow;
        }
    }
    return NULL;
}

Node *getStartingNode(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *intersection = floyedDetectLoop(head);
    Node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
void removeLoop(Node *head)
{
    if (head == NULL)
        return;
    Node *startLoop = getStartingNode(head);
    Node *temp = startLoop;
    while (temp->next != startLoop)
    {
        temp = temp->next;
    }
    temp->next = NULL;
}
int main()
{
    // creating dynamically object new Node
    Node *node1 = new Node(30);
    // creating node

    Node *head = node1;
    Node *tail = node1;
    // print(head);   //30
    // insert at ending---------------
    insertAtTail(tail, 12);
    // print(head);            //30 12
    insertAtTail(tail, 15);
    // print(head);    //30 12 15

    // nisert at position
    insertAt_Position(tail, head, 3, 22);
    // print(head);    //30 12 22 15
    // // insertAt_Position(tail , head , 1, 22);
    // // print(head);       // 22 30 12 22 15
    // insertAt_Position(tail , head , 4, 2);
    print(head);
    tail->next = head->next;
    cout << "head" << head->data << endl;
    cout << "tail " << tail->data << endl;
    // deletion(4,head,tail);
    // print(head); //30 12 22 2
    // cout<<"head" <<head->data <<endl;
    // cout<<"tail " <<tail->data<<endl;

    // // insert at begining ------------------
    // insertAtHead(head ,12);
    // print(head);            //12 30 12 15
    // insertAtHead(head ,15);
    // print(head);        //15 12 30 12 15
    // if(detectLoop(head)){
    //     cout<<"cycle is present" << endl;

    // }else{
    //     cout<<"cycle is not present" ;
    // }

    if (floyedDetectLoop(head) != NULL)
    {
        cout << "cycle is present" << endl;
    }
    else
    {
        cout << "cycle is not present";
    }
    cout<<"tail " <<tail ->data <<endl;
    cout << "starting at" << getStartingNode(head)->data << endl;
    removeLoop(head);
    print(head);
    cout<<"tail " <<tail ->data;
    return 0;
}