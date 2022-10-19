#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int s)
    {
        this->data = s;
        this->next = NULL;
    }
};

void printLinkedList(node *head)
{
    node *f = head;
    do
    {
        cout << head->data << "->";
        head = head->next;
    } while (f != head);

    cout << "NULL";
};

void InsertLinkedList(node *&head,int element, int d)
{
    if (head == NULL)
    {
        node *newNode = new node(d);
        head = newNode;
        newNode->next = newNode;
    }
    else
    {
        node *curr = head;
        node *newNode = new node(d);
        while (curr->data != element)
        {
            curr = curr->next;
          
        }

        // element found 
        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
};

void DeleteLinkedList(node *head,int element){
              node *temp = head;
              node *curr = temp->next;
              if (curr == temp)
              {
                free(curr);
                delete(curr);
              }

              while (temp->data != element)
              {
                curr = temp;
                temp = temp->next;
              }
              curr->next = temp->next;
              free(temp);
              delete(temp);
              
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
    q->next = f;

    cout << "Your Linked List is : ";
    printLinkedList(f);
    cout << endl;

    cout << "Inserting Element in Circular Linked List : ";
    InsertLinkedList(f,2, 21);
    printLinkedList(f);
    cout << endl;

    cout << "Deleting Element in Circular Linked List : ";
    DeleteLinkedList(f, 21);
    printLinkedList(f);
    cout << endl;



    return 0;
}