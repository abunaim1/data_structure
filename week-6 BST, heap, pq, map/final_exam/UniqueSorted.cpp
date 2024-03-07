#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main()
{
    int test;
    cin>>test;
    while (test--)
    {
        int n;
        cin >> n;
        set<int> s;
        while (n--)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        vector<int> v;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            v.push_back(*it);
        }
        reverse(v.begin(), v.end());
        for (auto it = v.begin(); it != v.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    return 0;
}