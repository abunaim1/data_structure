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
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
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
void delete_any_pos(Node *head, int pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            cout << endl
                 << "Invalid Index" << endl
                 << endl;
            return;
        }
    }
    if (temp->next == NULL)
    {
        cout << endl
             << "Invalid Index" << endl
             << endl;
        return;
    }
    Node *dlt = temp->next;
    temp->next = temp->next->next;
    delete dlt;
    cout << endl
         << pos << " "
         << "Node deleted successfully" << endl
         << endl;
}
void delet_head(Node *&head)
{
    if (head == NULL)
    {
        cout << endl
             << "Head is not available" << endl
             << endl;
        return;
    }
    Node *dlt = head;
    head = head->next;
    delete dlt;
    cout << endl
         << "Head Node deleted successfully" << endl
         << endl;
}
int main()
{
    Node *head = NULL;
    while (1)
    {
        cout << "Option 1: Insert a Tail: " << endl;                   // done
        cout << "Option 2: Print Linked List: " << endl;               // done
        cout << "Option 3: Insert at any position: " << endl;          // done
        cout << "Option 4: Insert at Head: " << endl;                  // done
        cout << "Option 5: Delete a Node from any position: " << endl; // done
        cout << "Option 6: Delete Head Node" << endl;                  // done
        cout << "Option 7: Terminate" << endl;
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
            cout << endl
                 << "Enter any position you want to delete: ";
            int pos;
            cin >> pos;
            if (pos == 0)
            {
                delet_head(head);
            }
            else
            {
                delete_any_pos(head, pos);
            }
        }
        else if (op == 6)
        {
            delet_head(head);
        }
        else if (op == 7)
        {
            break;
        }
    }

    return 0;
}