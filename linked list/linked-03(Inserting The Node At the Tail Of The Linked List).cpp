/*
Inserting The Node At the Tail Of The Linked List
*/

#include <iostream>
using namespace std;

class node
{
public:
    int info;
    node *n;
};

int main()
{
    int val;
    cout << "Enter the value of info of new pointer" << endl;
    cin >> val;

    node *first = new node();
    node *second = new node();
    node *third = new node();

    first->info = 10;
    first->n = second;

    second->info = 20;
    second->n = third;

    third->info = 30;
    third->n = NULL;

    node *end = new node();
    third->n = end;
    end->info = val;

    while (first != NULL)
    {
        cout << first->info << "->";
        first = first->n;
    }

    return 0;
}