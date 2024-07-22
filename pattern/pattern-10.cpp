/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
printing 0-1 pattern
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if((i+j)%2==0)
            {
                cout<<"0"<<' ';
            }
            else
            {
                cout<<"1"<<' ';
            }
        }
        cout<<endl;
    }
    return 0;
}
/*  idea
whenever the sum of i and j is even print 0
and when the sum is odd then print 1
*/