// time complexity=O(n)

#include <iostream>
using namespace std;

class node
{
public:
    int info;
    node *p;
};

node *reverse(node *&head)
{
    if (head == NULL || head->p == NULL)
    {
        return head;
    }
    node *newhead = reverse(head->p);
    head->p->p = head;
    head->p = NULL;

    return newhead;
}
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
    display(a);

    node *newhead = reverse(a);
    display(newhead);

    return 0;
}