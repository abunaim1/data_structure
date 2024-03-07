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
void checkPalindrom(Node *head, Node *tail){
    bool flag = true;
    Node *i, *j;
    for (i = head, j = tail; i != j && i->next != j; i = i->next, j = j->prev)
    {
        if(i->value!=j->value){
            flag = false;
            break;
        }
    }
    if(i->value!=j->value)flag=false;
    if(flag==false) cout<<"NO";
    else cout<<"YES";
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
    checkPalindrom(head, tail);
    return 0;
}