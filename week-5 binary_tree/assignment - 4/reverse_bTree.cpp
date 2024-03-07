#include <iostream>
#include <queue>
#include <vector>
#include <stack>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node *input_btree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(val);
    }
    queue<Node *> q;
    if (root)
    {
        q.push(root);
    }
    while (!q.empty())
    {

        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left, *right;
        if (l == -1)
            left = NULL;
        else
            left = new Node(l);
        if (r == -1)
            right = NULL;
        else
            right = new Node(r);
        f->left = left;
        f->right = right;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}
void reverse(Node *root)
{
    vector<int> v;
    stack<int> st;
    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        st.push(f->val);

        if (f->right)
            q.push(f->right);
        if (f->left)
            q.push(f->left);
    }
    while (!st.empty())
    {
        v.push_back(st.top());
        st.pop();
    }
    for(int c:v)
    {
        cout<<c<<" ";
    }
}
int main()
{
    Node *root = input_btree();
    reverse(root);
    return 0;
}