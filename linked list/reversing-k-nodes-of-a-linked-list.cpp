/*first k number of nodes will reverse with each other and then the other nodes will reverse
  with k common difference
  example;-
  before: 10->11->12->13->14->15->16->17
  k=2
  after:  11->10->13->12->15->14->17->16
  */
#include <iostream>
using namespace std;

class node
{
public:
    int info;
    node *p;
};
node *reversek(node *&head, int k)
{
    node *pre = NULL;
    node *current = head;
    node *next;

    int count = 0;
    while (current != NULL && count < k)
    {
        next = current->p;
        current->p = pre;
        pre = current;
        current = next;
        count++;
    }
    if(next !=NULL){
    head->p=reversek(next,k);
    } 
    return pre;
}
void display(node *a)
{
    while (a != NULL)
    {
        cout << a->info << "->";
        a = a->p;
    }
    cout<<"NULL"<<endl;
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

    int k=2;
    node *newhead =reversek(a,k); 
    display(newhead);
    return 0;
}