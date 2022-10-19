#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};
int countMid(node *&head)
{
    node *t = head;
    int c = 0;
    while (t != NULL)
    {
        c = c + 1;
        t = t->next;
    }
    return c;
}

void MiddleNode(node *&head)
{
    int v = (countMid(head)) / 2;
    node *t = head;
    int b = 0;
    while (t != NULL && b < v)
    {
        t = t->next;
        b++;
    }
    cout << "Middle Element is : " << t->data << "\n";
}
void printLinkedList(node *&head)
{
    node *t = head;
    while (t != NULL)
    {
        cout << t->data << "->";
        t = t->next;
    }
    cout << "NULL";
}
int main()
{
    node *f = new node(1);
    node *s = new node(2);
    node *t = new node(3);
    node *u = new node(4);
    node *i = new node(5);
    node *j = new node(6);

    f->next = s;
    s->next = t;
    t->next = u;
    u->next = i;
    i->next = j;
    j->next = NULL;

    cout << "Your Linked List is : ";
    printLinkedList(f);

    cout << endl;
    MiddleNode(f);
    return 0;
}