/*
printing Palindromic pattern


        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int k=i;
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k--;
        }
        k=1;
        for(int j=1;j<=(n+i);j++)
        {
            k++;
            cout<<k<<" ";
        }
        for(int j=1;j<=(2*n-1);j++)
        {
            cout<<' ';
        }
        cout<<endl;
    }
    return 0;
}
