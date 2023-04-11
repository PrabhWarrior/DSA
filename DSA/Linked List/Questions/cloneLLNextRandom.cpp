#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *arb;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->arb = NULL;
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
/*
void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    return;
}
Node *copyList(Node *head)
{
    // Step 1: Create a clone linked list
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;

    Node *curr = head;
    while (curr != NULL)
    {
        insertAtTail(cloneHead, cloneTail, curr->data);
        curr = curr->next;
    }

    // Step 2 : Create a map
    unordered_map<Node *, Node *> mp;
    Node *originalNode = head;
    Node *cloneNode = cloneHead;
    while (originalNode != NULL)
    {
        mp[originalNode] = cloneNode;
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }

    originalNode = head;
    cloneNode = cloneHead;

    while (originalNode != NULL)
    {
        cloneNode->arb = mp[originalNode->arb];
        originalNode = originalNode->next;
        cloneNode = cloneNode->next;
    }
    return cloneHead;
}
*/
void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    return;
}
Node *copyList(Node *head)
{
    // Step 1: Create a clone linked list
    Node *cloneHead = NULL;
    Node *cloneTail = NULL;

    Node *curr = head;
    while (curr != NULL)
    {
        insertAtTail(cloneHead, cloneTail, curr->data);
        curr = curr->next;
    }

    // Step 2: Clone nodes add in between Original List
    Node *originalNode = head;
    Node *cloneNode = cloneHead;

    while (originalNode != NULL && cloneNode != NULL)
    {
        Node *next = originalNode->next;
        originalNode->next = cloneNode;
        originalNode = next;

        next = cloneNode->next;
        cloneNode->next = originalNode;
        cloneNode = next;
    }

    // Step 3: Random Poiter Copy
    curr = head;
    while (curr != NULL)
    {
        if (curr->next != NULL && curr->arb != NULL)
        {
            curr->next->arb = curr->arb ? curr->arb->next : curr->arb;
        }
        curr = curr->next->next;
    }
    // Step 4: Revert Changes
    originalNode = head;
    cloneNode = cloneHead;

    while (originalNode != NULL && cloneNode != NULL)
    {
        originalNode->next = cloneNode->next;
        originalNode = originalNode->next;

        if (originalNode != NULL)
            cloneNode->next = originalNode->next;
        cloneNode = cloneNode->next;
    }

    return cloneHead;
}

int main()
{
    return 0;
}