#include<iostream>
using namespace std ;
int power(int n,int a)
{
    if(a==0)
    {
        return 1;
    }
    int prevpower = power(n,(a-1));
    return n*prevpower;
}
int main()
{
    int n,a;
    cin>>n>>a;
    cout<<power(n,a)<<endl;
    return 0;
}