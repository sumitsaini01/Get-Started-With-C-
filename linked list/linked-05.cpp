// deleting random node form linked list
// code is not working properly

#include <iostream>
using namespace std;

class node
{
public:
    int info;
    node *p;
};

/*void del(node *a, int val)
{
    while (a->p->info != val)
    {
        a->p;
    }
    node *todelete = a->p;
    a->p = a->p->p;
    delete todelete;
}*/

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
    node *e = new node();
    node *f = new node();
    a->info = 10;
    a->p = b;

    b->info = 20;
    b->p = c;

    c->info = 30;
    c->p = d;

    d->info = 40;
    d->p = e;

    e->info = 50;
    e->p = f;

    f->info = 60;
    f->p = NULL;

    display(a);

    int val=50;
    /*cout << "enter the info part of the node which u wanna delete" << endl;
    cin >> val;*/

     while (a->p->info != val)
     {
         a->p;
     }
     node *todelete = a->p;
     a->p = a->p->p;
     delete todelete;
     
    //del(a, val);

    display(a);

    return 0;
}