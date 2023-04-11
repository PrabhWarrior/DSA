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

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int data)
{

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode; // circular bna di
    }
    else
    {
        // non-empty list
        // assuming that the element is present in the list

        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found -- curr is representing element's node
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void deleteNode(Node *&tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "List is empty, please check again!" << endl;
        return;
    }
    else
    {
        // non empty
        // assuming that the value is present in the list
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        // 1 Node Linked List
        if (curr == prev)
        {
            tail = NULL;
        }

        // >=2 Node Linked List
        else if (tail == curr)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

void print(Node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty" << endl;
        return;
    }
    // while was'nt working for the single element linked list..
    // that's why we have to use do while.. it will execute atleast 1 time irresepective of the condition
    Node *temp = tail;
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);

    cout << endl;
}

bool isCircular(Node *tail)
{
    if (tail == NULL)
        return true;

    Node *temp = tail->next;

    while (temp != NULL && temp != tail)
    {
        temp = temp->next;
    }

    if (temp == tail)
        return true;

    return false;
}

bool detectLoop(Node *tail)
{
    if (tail == NULL)
        return false;

    map<Node *, bool> visited;

    Node *temp = tail;

    while (temp != NULL)
    {
        if (visited[temp] == true)
        {
            cout << "Cycle is present at " << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
}

Node *floydDetection(Node *tail)
{
    if (tail == NULL || tail->next == NULL)
        return NULL;

    Node *fast = tail;
    Node *slow = tail;

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
            cout << "Cycle is present at " << slow->data << endl;
            return slow;
        }
    }
}
Node *getStartingNode(Node *tail)
{
    if (tail == NULL)
        return NULL;
    Node *intersection = floydDetection(tail);
    Node *temp = tail;
    if (intersection == NULL)
        return NULL;
    while (temp != intersection)
    {
        temp = temp->next;
        intersection = intersection->next;
    }

    return temp;
}

void removeLoop(Node *tail)
{
    if (tail == NULL)
        return;

    Node *startOfLoop = getStartingNode(tail);
    if (startOfLoop == NULL)
        return;
    Node *temp = startOfLoop->next;
    while (temp->next != startOfLoop)
    {
        temp = temp->next;
    }

    temp->next = NULL;
}

int main()
{
    Node *tail = NULL;

    // print(tail);
    insertNode(tail, 2, 3);
    print(tail);

    insertNode(tail, 3, 5);
    print(tail);
    /*

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 7, 9);
    print(tail);

    insertNode(tail, 5, 6);
    print(tail);

    insertNode(tail, 9, 10);
    print(tail);

    */
    insertNode(tail, 3, 4);
    print(tail);

    // deleteNode(tail, 5);
    // print(tail);

    isCircular(tail) ? cout << "Linked List is Circular" << endl : cout << "Linked List is not Circular" << endl;
    detectLoop(tail) ? cout << "Linked List is Circular" << endl : cout << "Linked List is not Circular" << endl;

    floydDetection(tail) ? cout << "Linked List is Circular" << endl : cout << "Linked List is not Circular" << endl;

    // cout << getStartin gNode(tail)->data << endl;
    // removeLoop(tail);
    // detectLoop(tail) ? cout << "Linked List is Circular" << endl : cout << "Linked List is not Circular" << endl;
    // print(tail);

    return 0;
}