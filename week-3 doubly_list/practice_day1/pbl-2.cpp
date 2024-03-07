#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertAtTail(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = tail->next;
}
void reverse(Node *head, Node *tail)
{
    Node *i, *j;
    for (i = head, j = tail; i != j && i->next != j; i = i->next, j = j->prev)
    {
        swap(i->value, j->value);
    }
    swap(i->value, j->value);
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}
int main()
{
    int v;
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        insertAtTail(head, tail, v);
    }
    reverse(head, tail);
    print(head);
    return 0;
}