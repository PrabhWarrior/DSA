#include <iostream>
using namespace std;
void swapAlternate(int arr[], int n)
{
    int i = 0;
    while (i < n - 1)  // i + 1 < n
    {
        swap(arr[i],arr[i+1]);
        // int temp = arr[i];
        // arr[i] = arr[i+1];
        // arr[i+1] = temp;
        i = i + 2;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int even[6] = {8, 5, 2, 3, 4, 1};
    int odd[6] = {8, 5, 2, 3, 4};
    printArray(even, 6);
    swapAlternate(even, 6);
    printArray(even, 6);

    cout << endl;

    printArray(odd, 5);
    swapAlternate(odd, 5);
    printArray(odd, 5);
    return 0;
}