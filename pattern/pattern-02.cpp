/*  
*
* *
* * * 
* * * *

printing half pyramid using stars
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
            cout<<'*'<<' ';
        }
        cout<<endl;
    }
    return 0;
}

/*idea
the number of stars in a column is equal to the value of n
*/