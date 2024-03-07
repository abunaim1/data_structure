#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        stack<char> st;
        stack<char> newSt;
        int c;
        cin >> c;
        char a[c];
        for (int i = 0; i < c; i++)
        {
            cin >> a[i];
            if (st.empty())
            {
                st.push(a[i]);
            }
            else
            {
                if (st.top() == a[i])
                {
                    st.pop();
                }
                else
                {
                    if (st.top() == 'R' && a[i] == 'G' || st.top() == 'G' && a[i] == 'R') // done Y
                    {
                        if (newSt.empty())
                        {
                            newSt.push('Y');
                            st.pop();
                        }
                        else if (newSt.top() == 'Y')
                        {
                            newSt.pop();
                            st.pop();
                        }
                        else
                        {
                            newSt.push('Y');
                            st.pop();
                        }
                    }
                    else if (st.top() == 'B' && a[i] == 'R' || st.top() == 'R' && a[i] == 'B') // Done P
                    {
                        if (newSt.empty())
                        {
                            newSt.push('P');
                            st.pop();
                        }
                        else if (newSt.top() == 'P')
                        {
                            newSt.pop();
                            st.pop();
                        }
                        else
                        {
                            newSt.push('P');
                            st.pop();
                        }
                    }
                    else if (st.top() == 'G' && a[i] == 'B' || st.top() == 'B' && a[i] == 'G') //DoneC
                    {
                        if (newSt.empty())
                        {
                            newSt.push('C');
                            st.pop();
                        }
                        else if (newSt.top() == 'C')
                        {
                            newSt.pop();
                            st.pop();
                        }
                        else
                        {
                            newSt.push('C');
                            st.pop();
                        }
                    }
                }
            }
        }
        while (!newSt.empty())
        {
            st.push(newSt.top());
            newSt.pop();
        }
        while (!st.empty())
        {
            char x = st.top();
            st.pop();
            if (!st.empty() && x == st.top())
            {
                st.pop();
            }
            else
            {
                cout << x;
            }
        }
        cout << endl;
    }
    return 0;
}