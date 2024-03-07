#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};
void input_a_list(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void print_recursively(Node *n)
{
    // base case
    if (n == NULL)
    {
        return;
    }
    cout << n->value << " ";
    print_recursively(n->next);
}
void print_reverse(Node *n)
{
    // base case
    if (n == NULL)
    {
        return;
    }
    print_reverse(n->next);
    cout << n->value << " ";
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        input_a_list(head, tail, v);
    }
    print_reverse(head);
    cout<<endl;
    print_recursively(head);

    return 0;
}