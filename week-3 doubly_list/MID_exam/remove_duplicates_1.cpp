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
    tail = newNode;
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
    Node *tail = head;
    while (1)
    {
        cin >> v;
        if (v == -1)
            break;
        insertAtTail(head, tail, v);
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
    Node *temp = head;
    while (temp!= NULL)
    {
        if(temp->next == NULL) break;
        if (temp->value == temp->next->value)
        {
            Node *deleteNode = temp->next;
            temp->next = temp->next->next;
            delete deleteNode;
        }
        else if(temp->value != temp->next->value){
            temp = temp->next;
        }
    }
    print(head);
    return 0;
}