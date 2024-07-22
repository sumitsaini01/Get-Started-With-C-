/*
Inserting The Node At The Head Of The Linked List
*/

#include <iostream>
using namespace std;

class node
{
public:
    int info;
    node *p;
};

int main()
{
    int val;
    cout << "Enter the value of info of new pointer" << endl;
    cin >> val;

    node *first;
    node *second;
    node *third;

    first = new node();
    second = new node();
    third = new node();

    first->info = 10;
    first->p = second;

    second->info = 20;
    second->p = third;

    third->info = 30;
    third->p = NULL;

    node *n = new node();
    n->info = val;
    n->p = first;

    while (n != NULL)
    {
        cout << n->info << endl;
        n = n->p;
    }

    return 0;
}