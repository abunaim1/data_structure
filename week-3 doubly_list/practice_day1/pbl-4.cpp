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
void insertAtPosition(Node *&head, Node *&tail, int pos, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        temp->next = newNode;
        newNode->prev = temp;
        tail = newNode;
        return;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->prev;
    }
    cout << endl;
}
int size(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
int main()
{
    int test;
    Node *head = NULL;
    Node *tail = head;
    cin >> test;
    while (test--)
    {
        int pos, v;
        cin >> pos >> v;
        if (pos == size(head))
        {
            insertAtPosition(head, tail, pos, v);
            print(head);
            print_reverse(tail);
        }
        else if (pos < size(head))
        {
            insertAtPosition(head, tail, pos, v);
            print(head);
            print_reverse(tail);
        }
        else
        {
            cout << "INvalid"<<endl;
        }
    }
    return 0;
}