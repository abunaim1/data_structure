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
int main()
{   Node* head = NULL;
    Node* tail = head;
    while (1)
    {
        int v;
        cin >> v;
        if(v==-1) break;
        insert_at_tail(head, tail, v);
    }
    int flag=0;
    for(Node* i= head; i->next!=NULL; i=i->next){
        for(Node* j=i->next; j!=NULL; j=j->next){
            if(i->value > j->value){
                flag++;
                break;
            }
        }
    }
    if(flag==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}