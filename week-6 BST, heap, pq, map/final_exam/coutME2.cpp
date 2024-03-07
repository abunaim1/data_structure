#include <iostream>
#include <map>
#include <set>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        bool flag = false;
        long long int n;
        cin >> n;
        map<long long int, long long int> mp;
        long long int max = INT_MIN;
        long long int val = 0;
        for (int i = 0; i < n; i++)
        {
            long long int x;
            cin >> x;
            mp[x]++;
            if (max <= mp[x])
            {
                if (max < mp[x])
                {
                    max = mp[x];
                    val = x;
                }
                if (mp[x] == max && val<x)
                {
                    val = x;
                }
            }
        }
        cout << val << " " << max<<endl;
    }
    return 0;
}