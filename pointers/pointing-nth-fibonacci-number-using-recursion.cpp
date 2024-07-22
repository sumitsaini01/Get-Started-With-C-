//fibonaaci number
//0,1,1,2,3,5,8,13.....
//by adding the last two number we get our next number of fibonacci series 


#include<iostream>
using namespace std;

int fib(int n)
{
    if(n==0)
    {
      return 0;
    }
    if(n==1)
    {
        return 1;
    }

    /*we can also do it like this
    if(n==0 || n==1)
    { 
        return n;
    }*/

    return fib(n-1)+fib(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fib(n);
    return 0;
}