// set mainly -> sorted, duplicate and search niye kaj kore BST er
// actually this set wirking with balanced BST
// one best use of set is removing any duplicate values
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> s;

    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        s.insert(x); // O(LogN)
    }

    // for(auto it=s.begin(); it!=s.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }

    if (s.count(10)) //here count beparta true or false value return kore,, like 0 or 1.
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
    return 0;
}