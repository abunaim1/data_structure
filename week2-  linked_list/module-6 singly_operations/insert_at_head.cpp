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
void insert_at_tail(Node *&head, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        cout << endl
             << "Inserted at Head" << endl
             << endl;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
    cout << endl
         << "Inserted at tail" << endl
         << endl;
}
void insert_at_position(Node *head, int pos, int value)
{
    Node *newNode = new Node(value);
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout << endl
         << endl
         << "Inserted at Position"
         << " " << pos << endl
         << endl;
}
void insert_at_head(Node *&head, int value)
{
    Node *newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    cout << endl
         << "Inserted at head" << endl
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

int main()
{
    Node *head = NULL;
    while (1)
    {
        cout << "Option 1: Insert a Tail: " << endl;
        cout << "Option 2: Print Linked List: " << endl;
        cout << "Option 3: Insert at any position: " << endl;
        cout << "Option 4: Insert at Head: " << endl;
        cout << "Option 5: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Please Enter A Value: ";
            int value;
            cin >> value;
            insert_at_tail(head, value);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            cout << "Enter a position: " << endl;
            int pos;
            cin >> pos;
            cout << "Enter value: " << endl;
            int value;
            cin >> value;
            if (pos == 0)
            {
                insert_at_head(head, value);
            }
            else
            {
                insert_at_position(head, pos, value);
            }
        }
        else if (op == 4)
        {
            cout << "Enter value: " << endl;
            int value;
            cin >> value;
            insert_at_head(head, value);
        }
        else if (op == 5)
        {
            break;
        }
    }

    return 0;
}