#include <iostream>
using namespace std;

int binarSearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    // int mid = (start + end) / 2; // int ki range se bahar if (2^31 - 1(start) + 2^31 - 1(end))

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // left wala part
        if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int even[6] = {2, 5, 8, 19, 25, 74};
    int odd[5] = {1, 5, 9, 12, 15};

    int evenIndex = binarSearch(even, 6, 2);
    int oddIndex = binarSearch(odd, 5, 12);

    cout << "2 is present at index " << evenIndex << endl;
    cout << "12 is present at index " << oddIndex << endl;
    return 0;
}