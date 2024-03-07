#include <iostream>
#include <stack>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            string name;
            cin >> name;
            q.push(name);
        }
        else if (n == 1)
        {
            if (q.empty())cout << "Invalid"<<endl;
            else{
            cout << q.front() <<endl;
            q.pop();
            }
        }
    }
    return 0;
}