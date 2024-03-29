#include<iostream>
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
void print(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->value<<endl;
        temp = temp->next;
    }

}
void reverse(Node* &head, Node* cnt){
    if(cnt->next==NULL){
        head = cnt;
        return;
    }
    reverse(head, cnt->next);
    cnt->next->next = cnt;
    cnt->next = NULL;
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    head->next = a;
    a->next = b;
    reverse(head,head);
    print(head);
    return 0;
}