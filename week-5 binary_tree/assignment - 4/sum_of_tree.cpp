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
Node* input_btree()
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
        // 1. ber kora
        Node* f = q.front();
        q.pop();

        // 2. jabotio kaj
        int l, r;
        cin>> l >> r;
        Node *left , *right;
        if(l==-1) left = NULL;
        else left = new Node(l);
        if(r==-1) right = NULL;
        else right = new Node(r);
        f->left = left;
        f->right = right;

        // 3. children gula ke rakha
        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
    return root;
}
void levelorder(Node* root)
{
    queue<Node*> q;
    if(root)q.push(root);
    int sum = 0;
    while (!q.empty())
    {
        // 1. ber kore ana
        Node* f = q.front();
        q.pop();

        // 2. jabotio kaj kora
        sum = sum+f->val;

        //3. tar chidren gula ke rakha
        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
    cout<<sum<<endl;
    
}
int main()
{
    Node* root = input_btree();
    levelorder(root);
    return 0;
}