#include <iostream>
#include <queue>
using namespace std;
int main()
{
    priority_queue<long long int, vector<long long int>, greater<long long int> > pq;
    long long int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long int x;
        cin >> x;
        pq.push(x);
    }
    long long int queries;
    cin >> queries;
    for (long long int i = 0; i < queries; i++)
    {
        long long int q;
        cin >> q;
        if (q == 0)
        {
            long long int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        if (q == 1)
        {
            if (!pq.empty())
                cout << pq.top() << endl;
            else
                cout << "Empty" << endl;
        }
        if (q == 2)
        {
            if(!pq.empty())pq.pop();
            if (!pq.empty())
                cout << pq.top() << endl;
            if(pq.empty())
                cout << "Empty" << endl;
        }
    }
    return 0;
}