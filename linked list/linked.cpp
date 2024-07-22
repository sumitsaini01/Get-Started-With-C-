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
    // node *head;
    node *first;
    node *second;
    node *third;

    // head = first;

    first = new node();
    second = new node();
    third = new node();

    first->info = 1;
    first->p = second;

    second->info = 2;
    second->p = third;

    third->info = 3;
    third->p = NULL;

    cout << first->info << endl;
    cout << second->info << endl;
    cout << third->info << endl;

    while (first != NULL)
    {
        cout << first->info << endl;
        first = first->p;
    }

    return 0;
}