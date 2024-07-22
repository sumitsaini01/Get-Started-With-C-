/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
printing half pyramid using number 2
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/* idea
print the value of i
*/