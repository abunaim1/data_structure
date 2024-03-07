#include <iostream>
#include <list>
using namespace std;
class Node
{
public:
    string ad;
    Node *next;
    Node *prev;
    Node(string ad)
    {
        this->ad = ad;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insertAtTail(Node *&head, Node *&tail, string ad)
{
    Node *newNode = new Node(ad);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
int main()
{
    string ad;
    Node *head = NULL;
    Node *tail = NULL;
    while (1)
    {
        cin >> ad;
        if (ad == "end")
            break;
        insertAtTail(head, tail, ad);
    }
    int test;
    cin >> test;
    string web, web2;
    Node *temp2 = head;
    int cnt = 0;
    while (test--)
    {
        Node *temp = head;
        string s;
        cin >> s;
        if (s == "visit")
        {

            cin >> web;
            int flag = 0;
            while (temp != NULL)
            {
                if (temp->ad == web)
                {
                    cout << web << endl;
                    flag = 1;
                    break;
                }
                temp = temp->next;
            }
            if (flag == 0)
            {
                cout << "Not Available" << endl;
            }
            if (flag == 1)
            {
                temp2 = temp;  
                cnt = 1;
            }
        }

        else if (s == "prev")
        {
            if (cnt == 0)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                if (temp2->ad == head->ad)
                {
                    cout << "Not Available" << endl;
                    continue;
                }
                cout << temp2->prev->ad << endl;
                temp2 = temp2->prev;
            }
        }
        else if (s == "next")
        {
            if (cnt == 0)
            {
                cout << "Not Available" << endl;
            }
            else
            {
                if (temp2->ad == tail->ad)
                {
                    cout << "Not Available" << endl;
                    continue;
                }
                cout << temp2->next->ad << endl;
                temp2 = temp2->next;
            }
        }
    }
    return 0;
}