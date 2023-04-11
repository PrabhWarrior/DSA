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
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

Node *uniqueSortedList(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *curr = head;

    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            Node *next_next = curr->next->next;
            Node *nodeToDelete = curr->next;
            curr->next = next_next;
            delete (nodeToDelete);
        }
        else
        {
            curr = curr->next;
        }
    }
    return head;
}
int main()
{
    return 0;
}