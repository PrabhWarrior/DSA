// Concept of Max. Heap and Min. Heap
// By default Priority queue is -> Max. Heap
#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // Max. Heap
    priority_queue<int> maxi;

    // Min. Heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);   

    cout << "Size -> " << maxi.size() << endl;

    // maxi.size() is changing after we are poping it out that's why store it's value
    //  rather than writing in the loop condition directly
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;
    // 3 2 1 0

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);

    cout << "Size -> " << maxi.size() << endl;

    n = mini.size();
    for (int i = 0; i < n; i++)
    {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;
    // 0 1 3 4 5

    cout << "Empty or not -> " << mini.empty() << endl; 

    return 0;
}