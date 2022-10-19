#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int f)
    {
        this->data = f;
        this->next = NULL;
        this->prev = NULL;
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
void InsertAtFront(node *&head, int y)
{
    node *newNode = new node(y);
    node *t = head;
    node *c = NULL;
    newNode->prev = NULL;
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
};
void InsertingAtEnd(node *&head, int y)
{
    node *newNode = new node(y);
    node *u = head;

    while (u->next != NULL)
    {

        u = u->next;
    }
    u->next = newNode;
    newNode->prev = u;
    newNode->next = NULL;
};

void InsertAtTheMid(node *&head, int d, int p)
{
    node *newNode = new node(d);
    node *c = NULL;
    node *t = head;
    int h = 0;
    while (h < p && t != NULL)
    {
        c = t;
        t = t->next;
        h++;
    }
    newNode->next = c->next;
    c->next = newNode;
    newNode->prev = c;
    t->prev = newNode;
};
void deleteFromFront(node *&head)
{
    node *t = head;
    head = head->next;
    delete (t);
    free(t);
}

void deleteFromEnd(node *&head)
{
    node *r = head;
    node *c = NULL;
    while (r->next != NULL)
    {
        c = r;
        r = r->next;
    }
    c->next = NULL;
    delete (r);
    free(r);
};

void deleteFromAnyPosition(node *&head, int p)
{
    node *t = head;
    int c = 0;
    node *curr = NULL;
    while (t != NULL && c < p)
    {
        curr = t;
        t = t->next;
        c++;
    }
    curr->next = t->next;
    t->next->prev = curr;
};
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

    cout << "Inserting At the Front : ";
    InsertAtFront(f, 12);
    printLinkedList(f);

    cout << "\nInserting At The End : ";
    InsertingAtEnd(f, 56);
    printLinkedList(f);

    cout << endl;
    cout << "Inserting At the Mid : ";
    InsertAtTheMid(f, 31, 2);
    printLinkedList(f);

    cout << endl;
    cout << "Deletion From Front : ";
    deleteFromFront(f);
    printLinkedList(f);

    cout << endl;
    cout << "Deletion From End : ";
    deleteFromEnd(f);
    printLinkedList(f);

    cout << endl;
    cout << "Deletion From Any Position : ";
    deleteFromAnyPosition(f,2);
    printLinkedList(f);

    return 0;
}