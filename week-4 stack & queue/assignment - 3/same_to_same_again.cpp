#include <iostream>
#include <list>
using namespace std;
class myStack
{
public:
    list<int> l;
    void push(int n)
    {
        l.push_back(n);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
class myQueue
{
public:
    list<int> l;
    void push(int n)
    {
        l.push_back(n);
    }
    void pop()
    {
        l.pop_front();
    }
    int front()
    {
        return l.front();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};
int main()
{
    myStack st;
    myQueue q;
    myQueue newQ;
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