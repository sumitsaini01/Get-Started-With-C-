// deleting the node form the head of the linked list

#include <iostream>
using namespace std;

class node
{
public:
    int info;
    node *p;
};
void display(node *a)
{
    while (a != NULL)
    {
        cout << a->info << "->" << endl;
        a = a->p;
    }
}

int main()
{
    node *a = new node();
    node *b = new node();
    node *c = new node();
    node *d = new node();

    a->info = 10;
    a->p = b;

    b->info = 20;
    b->p = c;

    c->info = 30;
    c->p = d;

    d->info = 40;
    d->p = NULL;

    node *todelete = a;
    a = a->p;
    delete todelete;

   // display(a); // from this we can print the linked after deleting the node

    while (a != NULL)  
    {
        cout << a->info << "->" << endl;
        a = a->p;
    }

    return 0;
}