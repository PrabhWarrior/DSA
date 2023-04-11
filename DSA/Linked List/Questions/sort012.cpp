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
    ~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

// First Approach -- Counting
Node *sortList(Node *head)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zeroCount++;
        }
        else if (temp->data == 1)
        {
            oneCount++;
        }
        else if (temp->data == 2)
        {
            twoCount++;
        }
        temp = temp->next;
    }

    temp = head;

    while (temp != NULL)
    {

        if (zeroCount)
        {
            temp->data = 0;
            zeroCount--;
        }
        else if (oneCount)
        {
            temp->data = 1;
            oneCount--;
        }
        else if (twoCount)
        {
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;
}

// Second Approach -- When Data replacement is not allowed
void insertTail(Node *&tail, Node *curr)
{
    tail->next = curr;
    tail = curr;
}
Node *sortList(Node *head)
{
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;

    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;

    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *curr = head;
    // Seperate List
    while (curr != NULL)
    {
        int value = curr->data;
        if (value == 0)
        {
            insertTail(zeroTail, curr);
        }
        else if (value == 1)
        {
            insertTail(oneTail, curr);
        }
        else if (value == 2)
        {
            insertTail(twoTail, curr);
        }
        curr = curr->next;
    }

    // Merge Lists
    if (oneHead->next != NULL)
    {
        zeroTail->next = oneHead->next;
        oneTail->next = twoHead->next;
    }
    else
    {
        zeroTail->next = twoHead->next;
    }
    twoTail->next = NULL;

    head = zeroHead->next;

    // delete dummy nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;
}

int main()
{

    return 0;
}