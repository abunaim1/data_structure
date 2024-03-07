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
int max_height(Node *root)
{
    if (root == NULL)
        return 0;
    int l = max_height(root->left);
    int r = max_height(root->right);
    return max(l, r) + 1;
}
void perfect(Node *root)
{
    int h = max_height(root);

    queue<Node*> q;
    if(root)q.push(root);
    int sum = 0;
    vector<int>v;
    int cnt = 0;
    while (!q.empty())
    {
        
        Node* f = q.front();
        cnt++;
        q.pop();
        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
   if(cnt == (pow(2,h)-1))cout<<"YES";
   else cout<<"NO";
}
int main()
{
    Node *root = input_btree();
    perfect(root);
    return 0;
}