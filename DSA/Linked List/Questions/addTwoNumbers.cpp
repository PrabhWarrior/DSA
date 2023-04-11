#include <iostream>
#include <vector>
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

Node *reverse(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;
    Node *next = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void insertAtTail(class Node *&head, class Node *&tail, int val)
{
    Node *temp = new Node(val);
    // empty list
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
    return;
}

// More Optimized
/*
while(first != NULL || second != NULL || carry != 0) {

            int val1 = 0;
            if(first != NULL)
                val1 = first -> data;

            int val2 = 0;
            if(second !=NULL)
                val2 = second -> data;


            int sum = carry + val1 + val2;

            int digit = sum%10;

            //create node and add in answer Linked List
            insertAtTail(ansHead, ansTail, digit);

            carry = sum/10;
            if(first != NULL)
                first = first -> next;

            if(second != NULL)
                second = second -> next;
        }
        return ansHead;
    }
*/

Node *add(Node *first, Node *second)
{
    int carry = 0;
    int sum = 0;
    int digit = 0;

    Node *ansHead = NULL;
    Node *ansTail = NULL;

    while (first != NULL && second != NULL)
    {
        sum = carry + first->data + second->data;
        digit = sum % 10;
        // create node and add in ans linked list
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
        first = first->next;
        second = second->next;
    }

    while (first != NULL)
    {
        sum = carry + first->data;
        digit = sum % 10;
        // create node and add in ans linked list
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
        first = first->next;
    }

    while (second != NULL)
    {
        sum = carry + second->data;
        digit = sum % 10;
        // create node and add in ans linked list
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
        second = second->next;
    }

    while (carry != 0)
    {
        sum = carry;
        digit = sum % 10;
        // create node and add in ans linked list
        insertAtTail(ansHead, ansTail, digit);
        carry = sum / 10;
    }

    return ansHead;
}
// Function to add two numbers represented by linked list.
struct Node *addTwoLists(struct Node *first, struct Node *second)
{
    // Step 1 - Reverse Input LL
    first = reverse(first);
    second = reverse(second);

    // Step 2 - Add Two LL

    Node *ans = add(first, second);

    // Step 3 - Reverse ans

    ans = reverse(ans);

    return ans;
}
int main()
{

    return 0;
}