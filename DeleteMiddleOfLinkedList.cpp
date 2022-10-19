#include<iostream>
using namespace std;
class no{
    public:
    int d;
    no* n;
    no(int y){
        this->d = y;
        this->n = NULL;
    }

};
void printLinkedList(no *&head)
{
    no *t = head;
    while (t != NULL)
    {
        cout << t->d << "->";
        t = t->n;
    }
    cout << "NULL";
};
int countMid(no *&head)
{
    no *t = head;
    int c = 0;
    while (t != NULL)
    {
        c = c + 1;
        t = t->n;
    }
    return c;
}
no *DeletingMiddleElement(no *head){
    no *t = head;
    int y = (countMid(head))/2;
    int p = 0;
    no *h = NULL;
    while (t!=NULL && p<y)
    {
        h = t;
        t = t->n;
        p++;
    }
     h->n = t->n;
     delete(t);
     free(t);

     return t;
    
}
int main(){
    no *f = new no(1);
    no *s = new no(2);
    no *t = new no(3);
    no *u = new no(4);
    no *i = new no(5);
    no *j = new no(6);

    f->n = s;
    s->n = t;
    t->n = u;
    u->n = i;
    i->n = j;
    j->n = NULL;

    cout << "Your Linked List is : ";
    printLinkedList(f);

    cout<<"\nAfter Deleting The middle element : ";
    DeletingMiddleElement(f);
    printLinkedList(f);
    return 0;
}