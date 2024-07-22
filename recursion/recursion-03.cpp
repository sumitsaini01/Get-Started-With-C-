#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    int prevfact = fact(n-1);
    return n*prevfact;
    //or we can direct return the expression 
    // return n*fact(n-1);
    //that will also be fine 
}

int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}