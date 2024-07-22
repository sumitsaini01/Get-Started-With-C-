#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p;
    p=&a;

    int **q;    //applying poniter on a pointer 
    q=&p;

    cout<<*q<<endl;   //yha ek br derefreence kiya h toh p ki value print hogi
    cout<<**q<<endl;   //yha do br derefreence kiya h toh a ki value print hogi


    return 0;
}