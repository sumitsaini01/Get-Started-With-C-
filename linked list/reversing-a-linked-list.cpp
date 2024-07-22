// time complexity =O(n)

#include <iostream>
using namespace std;

class node
{
public:
    int info;
    node *p;
};
node *reverse(node *&p)
{
    node *pre = NULL;
    node *current = p;
    node *next;

    while (current != NULL)
    {
        next = current->p;
        current->p = pre;

        pre = current;
        current = next;
    }
    return pre;
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
    cout << "   " << endl;
    display(newhead);

    return 0;
}