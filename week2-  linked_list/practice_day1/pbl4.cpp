#include<iostream>
#include<list>
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
void insert_at_tail(Node* &head, Node* &tail, int v){
    Node* newNode = new Node(v);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void insert_at_position(Node* head, int pos, int v){
    Node* newNode = new Node(v);
    Node* temp = head;
    if(pos==0){
        cout<<"Invalid";
        return;
    }
    for(int i=1; i<=pos-1; i++){
        temp = temp->next;
        if(temp == NULL){
            cout<<"Invalid"<<endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void print_list(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->value<<" ";
        temp = temp->next;
    }
}
int size_list(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp!=NULL){
        temp=temp->next;
        count++;
    }
    return count;
}
int main()
{
    Node* head = NULL;
    Node* tail = head;
    while (1)
    {
        int v;
        cin >> v;
        if(v==-1) break;
        insert_at_tail(head, tail, v);
    }
    int size = size_list(head);
    int test;
    cin>>test;
    while(test--){
        int pos, v;
        cin>>pos>>v;
        insert_at_position(head,pos,v);
        if(pos!=0 && pos <= size){
            print_list(head);
        }
    }

    return 0;
}