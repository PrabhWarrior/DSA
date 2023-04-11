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

// return head of the revrese list
Node *reverse1(Node *head)
{
    // base case
    if (head == NULL || head->next == NULL)
        return head;

    Node *smallHead = reverse1(head->next);
    head->next->next = head;
    head->next = NULL;

    return smallHead;
}

void reverse(Node *&head, Node *curr, Node *prev)
{
    // base case
    if (curr == NULL)
    {
        head = prev;
        return;
    }

    Node *forward = curr->next;
    reverse(head, forward, curr); //(head, curr->next, prev->next)
    curr->next = prev;
}
Node *reverseList(Node *head)
{

    // Approach 3
    return reverse1(head);

    // Approach 2
    /*
    Node* curr = head;
    Node* prev = NULL;
    reverse(head, curr, prev);
    return head;
    */

    // Approach 1
    /*
    if(head == NULL || head->next == NULL) return head;
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr; // prev = prev->next
        curr = forward; // curr = curr->next
    }
    return prev;*/
}

int main()
{

    return 0;
}