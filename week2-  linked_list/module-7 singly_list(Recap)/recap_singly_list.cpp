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
void insert_any_pos(Node *head, int pos, int v)
{
    Node *newNode = new Node(v);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid Position" << endl
                 << endl;
            return;
        }
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << "Inserter at position"
         << " " << pos << endl
         << endl;
}
void insert_a_tail(Node *&head, Node *&tail, int v) // O(1)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        cout << "Head inserted Successfully" << endl
             << endl;
        return;
    }
    tail->next = newNode;
    tail = newNode;

    cout << "Tail Inserted Successfully" << endl;
}
void insert_a_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    newNode->next = head;
    head = newNode;
    tail = newNode;
    cout << "Head inserted Successfully" << endl
         << endl;
}
void print_linked_list(Node *head)
{
    cout << endl;
    cout << "Your Linked List: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl
         << endl;
}
void delete_node_position(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << "Invalid Position" << endl
                 << endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << "Invalid Position" << endl
             << endl;
        return;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    delete deleteNode;
    cout<<"Node Deleted at position "<<pos<<endl<<endl;
}
void delete_head_node(Node* &head){
    Node* delete_node = head;
    head = head->next;
    delete delete_node;
    cout<<"Head Deleted Successfully"<<endl<<endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = head;
    while (1)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter a value: ";
            int v;
            cin >> v;
            insert_a_tail(head, tail, v);
        }
        else if (op == 2)
        {
            cout << "Enter a position: ";
            int pos;
            cin >> pos;
            if (pos == 0)
            {
                cout << "Enter a value: ";
                int v;
                cin >> v;
                insert_a_head(head, tail, v);
            }
            else
            {
                cout << "Enter a value: ";
                int v;
                cin >> v;
                insert_any_pos(head, pos, v);
            }
        }
        else if (op == 3)
        {
            print_linked_list(head);
        }
        else if (op == 4)
        {
            cout << "Enter a value: ";
            int v;
            cin >> v;
            insert_a_head(head, tail, v);
        }
        else if (op == 5)
        {
            cout<<"Enter Position which you want to delete: ";
            int pos;
            cin >> pos;
            if(pos==0){
                delete_head_node(head);
            }
            else{
                delete_node_position(head, pos);
            }
        }
        else if (op == 6)
        {
            break;
        }
    }

    return 0;
}