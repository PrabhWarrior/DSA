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

bool isPalindrome(Node *head)
{
    vector<int> vec;
    Node *temp = head;
    while (temp != NULL)
    {
        vec.push_back(temp->val);
        temp = temp->next;
    }

    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] != vec[vec.size() - i - 1])
            return false;
    }
    return true;
}
int main()
{

    return 0;
}