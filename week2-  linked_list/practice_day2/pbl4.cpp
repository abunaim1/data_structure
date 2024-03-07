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
    Node *temp = head;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    temp->next = newNode;
    tail = newNode;
}
void find_mix(Node *head)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value < j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
    cout << head->value << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = head;
    while (1)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        input_a_list(head, tail, v);
    }
    find_mix(head);
    return 0;
}