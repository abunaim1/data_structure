#include <iostream>
#include <queue>
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
Node *input_bst()
{
    int v;
    cin >> v;
    Node *root;
    if (v == -1)
    {
        root = NULL;
    }
    else
    {
        root = new Node(v);
    }
    queue<Node *> q;
    if (root)
        q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *left, *right;
        if (l == -1 || r == -1)
        {
            left = NULL;
            right = NULL;
        }
        else
        {
            left = new Node(l);
            right = new Node(r);
        }
        f->left = left;
        f->right = right;

        if (f->left)
            q.push(f->left);
        if (f->right)
            q.push(f->right);
    }
    return root;
}
bool search(Node *root, int x)
{
    if (root == NULL)
        return false;
    if (root->val == x)
        return true;
    if (x < root->val)
    {
        return search(root->left, x);
    }
    if (x > root->val)
    {
        return search(root->right, x);
    }
}
int main()
{
    Node *root = input_bst();
    int x;
    cin>>x;
    if(search(root, x)==true)cout<<"YEs, Found"<<endl;
    else cout<<"No, found"<<endl;
    return 0;
}