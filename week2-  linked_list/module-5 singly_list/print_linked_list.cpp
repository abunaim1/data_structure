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
int main()
{
    Node* head = new Node(5);
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // cout<<head->value<<endl;
    // cout<<head->next->value<<endl;
    // cout<<head->next->next->value<<endl;
    // cout<<head->next->next->next->value<<endl;

    Node* temp = head;
    while(temp=NULL){
        cout<<temp->value<<endl;
        temp = temp->next;
    }
    return 0;
}