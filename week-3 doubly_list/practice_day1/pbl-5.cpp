// #include <iostream>
// #include<list>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++){
//         cin>>a[i];
//     }
//     list<int>myList(a,a+n);
//     myList.sort();
//     for(int v:myList){
//         cout<<v<<" ";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *prev;
    Node *next;
    Node(int v)
    {
        this->value = v;
        this->prev = NULL;
        this->next = NULL;
    }
};
void print_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->value << endl;
        tmp = tmp->next;
    }
}
void insert_at_head(Node *&head, Node *&tail, int v)
{
    Node *newNode = new Node(v);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void add_linked_list(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // if (head->next == NULL)
    // {
    //     tail = newNode;
    //     tail->prev = head;
    //     head->next = tail;
    // }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        cout << endl
             << "Insert into linked list. -1 for breaking the operation and -0 to insert at head" << endl
             << endl;
        int val;
        cin >> val;
        if (val == -1)
        {
            break;
        }
        if (val == -0)
        {
            cout << endl
                 << endl
                 << "Insert value for head" << endl
                 << endl;
            int val;
            cin >> val;
            insert_at_head(head, tail, val);
        }
        if (val == -2)
        {
            int val;
            cin >> val;
            add_linked_list(head, tail, val);
        }
    }
    cout << endl
         << "Doubly linked list" << endl;
    print_list(head);
    return 0;
}