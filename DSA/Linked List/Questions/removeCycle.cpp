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

Node *floydDetection(Node *head)
{
    if (head == NULL || head->next == NULL)
        return NULL;

    Node *fast = head;
    Node *slow = head;

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
            return slow;
        }
    }
    return NULL;
}

Node *getStartingNode(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *intersection = floydDetection(head);
    Node *temp = head;

    if (intersection == NULL)
        return NULL;

    while (temp != intersection)
    {
        temp = temp->next;
        intersection = intersection->next;
    }

    return temp;
}

Node *removeLoop(Node *head)
{
    if (head == NULL)
        return NULL;

    Node *startOfLoop = getStartingNode(head);

    if (startOfLoop == NULL)
        return head;

    Node *temp = startOfLoop;

    while (temp->next != startOfLoop)
    {
        temp = temp->next;
    }

    temp->next = NULL;
    return head;
}

int main()
{

    return 0;
}