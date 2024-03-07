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
void reverse(Node* &newHead, Node* cur){
    if(cur->next==NULL){
        newHead = cur;
        return;
    }
    reverse(newHead, cur->next);
    cur->next->next = cur;
    cur->next = NULL;
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
    Node *newHead = NULL;
    Node *newTail = NULL;
    Node *temp = head;
    while (temp != NULL)
    {
        insertAtTail(newHead, newTail, temp->value);
        temp = temp->next;
    }
    reverse(newHead, newHead);
    temp = head;
    Node* temp2 = newHead;
    bool flag = true;
    while(temp!=NULL){
        if(temp->value!=temp2->value){
            flag = false;
            break;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    if(flag==false)cout<<"NO";
    else cout<<"YES";
    return 0;
}