#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<int> q;
    q.push(10);
    if (!q.empty())
    {
        cout << q.front();
        q.pop();
    }
    return 0;
}