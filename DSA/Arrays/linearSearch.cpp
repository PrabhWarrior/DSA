#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (key == arr[i])
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};

    cout << "Enter the element to seach for " << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if(found)
    {
        cout << "The element is present" << endl;
    }
    else
    {
        cout << "The element is'nt present" << endl;
    }


    return 0;
}