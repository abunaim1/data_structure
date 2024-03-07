#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {

        int n;
        cin >> n;
        vector<int> v1(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        vector<int> v2(v1);
        sort(v1.begin(), v1.end());
        if (v1 == v2)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout<<endl;
    }

    return 0;
}