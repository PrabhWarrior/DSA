#include <iostream>
#include <stack>
using namespace std;

// Implementation of stack

class Stack
{
    // Properties  -- Data Members
public:
    int *arr;
    int top;
    int size;

    // Behaviours  -- Functions
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack Underflow" << endl;
        }
    }

    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    // st.push(22);
    // st.push(43);
    // st.push(44);

    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    st.pop();
    cout << st.peek() << endl;

    string em = st.isEmpty() ? "Stack is empty" : "Stack is not empty";
    cout << em << endl;

    /*
    // creation of stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);
    s.push(4);

    // pop operation
    s.pop();

    cout << "Printing top element " << s.top() << endl;

    string em = s.empty() ? " empty" : " not empty";
    cout << "Stack is" << em << endl;

    cout << "Size of stack is " << s.size() << endl;
    */
    return 0;
}