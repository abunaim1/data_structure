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
int main()
{
    Node *head = NULL;
    Node *tail = head;
    Node *head2 = NULL;
    Node *tail2 = head2;
    while (1)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head, tail, v);
    }
    while (1)
    {
        int v;
        cin >> v;
        if (v == -1)
            break;
        insert_at_tail(head2, tail2, v);
    }
    int count1 = size(head);
    int count2 = size(head2);
    int flag = 0;
    if (count1 == count2)
    {
        for (Node *i = head, *j = head2; i != NULL; i = i->next, j = j->next)
        {
            if (i->value != j->value)
            {
                flag++;
            }
        }
        if(flag==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}