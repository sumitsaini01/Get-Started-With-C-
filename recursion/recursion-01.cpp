//in recursion function call itself to solve the problem 


#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
   int presum= sum(n-1);

   return n+presum;
}


int main()
{
    int n;
    cin>>n;

    cout<<sum(n)<<endl;
    return 0;
}