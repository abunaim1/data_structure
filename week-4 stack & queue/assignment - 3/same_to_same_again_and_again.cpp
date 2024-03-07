#include<iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    stack<int>st;
    queue<int>q;
    queue<int>newQ;
    int n, m;
    cin >> n >> m;
    if (m == n)
    {
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            st.push(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            q.push(x);
        }
        while (!st.empty())
        {
            newQ.push(st.top());
            st.pop();
        }
        int flag = 0;
        while(!q.empty()){
            if(q.front()!=newQ.front()){
                flag = 1;
                break;
            }
            else{
                q.pop();
                newQ.pop();
            }
        }
        if(flag==1) cout<<"NO";
        else cout<<"YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}