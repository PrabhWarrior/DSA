#include <iostream>
using namespace std;

void reachHome(int src, int dest)
{   
    cout << "src : " << src << " dest : " << dest << endl;
    // base case
    if (src == dest)
    {
        cout << "Reached" << endl;
        return;
    }

    //processing -- One step move forward
    src++;

    // recursive call
    return reachHome(src,dest);
}

int main()
{
    int src = 1;
    int dest = 10;

    reachHome(src, dest);

    return 0;
}