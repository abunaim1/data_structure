#include <iostream>
#include <list>
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
void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if(head==NULL){
        head = newNode;
        tail = newNode;
    }
    head = newNode;
}
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
void print_list(Node *head, Node *tail)
{
    cout << head->value << " " << tail->value<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = head;
    int test;
    cin >> test;
    while (test--)
    {
        int pos, v;
        cin >> pos >> v;
        if (pos == 0)
        {
            insert_at_head(head,tail,v);
        }
        else if (pos == 1)
        {
            insert_at_tail(head, tail, v);
        }
        print_list(head, tail);
    }

    return 0;
}