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
    int v, v2;
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
    Node *head2 = NULL;
    Node *tail2 = NULL;
    while (1)
    {
        cin >> v2;
        if (v2 == -1)
        {
            break;
        }
        insertAtTail(head2, tail2, v2);
    }
    if(size(head)!= size(head2)) cout<<"NO";
    else{
        Node* i = head;
        Node* j = head2;
        bool flag = true;
        while(i!=NULL){
            if(i->value!=j->value){
                flag=false;
                break;
            }
            i=i->next;
            j=j->next;
        }
        if(flag==false)cout<<"NO";
        else cout<<"YES";
    }
    return 0;
}