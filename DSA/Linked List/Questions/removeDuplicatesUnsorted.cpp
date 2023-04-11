#include <iostream>
#include <unordered_map>
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

Node *removeDuplicatesMoreSimpler(Node *head)
{
    if (head == NULL)
        return NULL;

    unordered_map<int, bool> visited;

    Node *curr = head;
    visited[curr->data] = true;
    Node *prev = curr;
    curr = curr->next;

    while (curr != NULL)
    {

        if (visited[curr->data])
        {
            prev->next = curr->next;
            curr->next = NULL;
            delete (curr);
        }
        else
        {
            prev = curr;
            visited[curr->data] = true;
        }
        curr = prev->next;
    }
    return head;
}

Node *removeDuplicates(Node *head)
{
    if (head == NULL)
        return NULL;

    unordered_map<int, bool> visited;

    Node *curr = head;
    visited[curr->data] = true;
    Node *prev = curr;
    curr = curr->next;

    while (curr != NULL)
    {

        if (visited[curr->data])
        {
            Node *temp = curr->next;
            prev->next = curr->next;
            curr->next = NULL;
            delete (curr);
            curr = temp;
        }
        else
        {
            prev = curr;
            visited[curr->data] = true;
            curr = curr->next;
        }
    }
    return head;
}
int main()
{
    return 0;
}