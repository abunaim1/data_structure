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
void insert_at_tail(Node *&head, Node *&tail, int v)
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
int size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void print_middle_element(Node *head)
{
    Node *temp = head;
    int count = size(head);
    if (count % 2 != 0)
    {
        for (int i = 1; i <= count / 2; i++)
        {
            temp = temp->next;
        }
        cout << temp->value << endl;
    }
    else
    {
        for (int i = 1; i < count / 2; i++)
        {
            temp = temp->next;
        }
        cout<< temp->next->value<<" "<< temp->value << endl;
    }
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
        insert_at_tail(head, tail, v);
    }
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value, j->value);
            }
        }
    }
    print_middle_element(head);
    return 0;
}