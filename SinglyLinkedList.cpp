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
void printLinkedList(node *head)
{
    node *f = head;
    while (f != NULL)
    {
        cout << f->data << "->";
        f = f->next;
    }
    cout << "NULL";
}

void InsertingAtFront(node *&head, int d)
{
    node *t = head;
    node *newnode = new node(d);
    newnode->next = t;
    head = newnode;
};

void InsertingAtTheEnd(node *&head, int g)
{
    node *u = head;
    node *newNode = new node(g);
    while (u->next != NULL)
    {
        u = u->next;
    }
    u->next = newNode;
    newNode->next = NULL;
};
void InsertAtAnyPosition(node *&head, int d, int p)
{
    node *r = head;
    int y = 0;
    node *newNode = new node(d);
    node *c = NULL;
    while (r->next != NULL && y < p)
    {
        c = r;
        r = r->next;
        y++;
    }
    newNode->next = c->next;
    c->next = newNode;
};

void deleteFromFront(node *&head)
{
    node *d = head;
    head = head->next;
    delete (d);
    free(d);
};
void deleteFromLast(node *&head)
{
    node *t = head;
    node *c = NULL;
    while (t->next != NULL)
    {
        c = t;
        t = t->next;
    }
    delete (t);
    free(t);
    c->next = NULL;
};

void deleteFromMid(node *&head, int p)
{
    node *r = head;
    int d = 0;
    node *u = NULL;
    while (r != NULL && d < p)
    {
        u = r;
        r = r->next;
        d++;
    }
    u->next = NULL;
    u->next = r->next;
}
int main()
{
    node *f = new node(1);
    node *d = new node(2);
    node *r = new node(3);
    node *q = new node(4);
    f->next = d;
    d->next = r;
    r->next = q;
    q->next = NULL;

    cout << "Your Linked List is : ";
    printLinkedList(f);
    cout << endl;

    InsertingAtFront(f, 12);
    cout << "Inserting At the Front : ";
    printLinkedList(f);

    cout << endl;
    cout << "Inserting At the end : ";
    InsertingAtTheEnd(f, 7);
    printLinkedList(f);

    cout << endl;
    cout << "Inserting At the Any Position : ";
    InsertAtAnyPosition(f, 23, 2);
    printLinkedList(f);

    cout << "\nDeleting First element : ";
    deleteFromFront(f);
    printLinkedList(f);

    cout << "\nDeleteing Last Element : ";
    deleteFromLast(f);
    printLinkedList(f);

    cout << endl;
    cout << "Deleteing element from any position : ";
    deleteFromMid(f, 2);
    printLinkedList(f);
    return 0;
}