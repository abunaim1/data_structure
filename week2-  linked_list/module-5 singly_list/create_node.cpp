#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
 
};
int main()
{
    Node a, b;
    a.next = &b;
    b.next = NULL;

    a.val = 10;
    b.val = 20;

    cout<<a.val<<endl;
    cout<<a.next->val<<endl;  //cout<<(*a.next).val<<endl;
    return 0;
}