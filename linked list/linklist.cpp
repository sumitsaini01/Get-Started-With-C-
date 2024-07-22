#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

void insertBeginning( Node ** head, int data)
{
    Node * newNode= new Node();
    newNode->data=data;
}