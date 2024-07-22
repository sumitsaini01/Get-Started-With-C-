/*
1
2 3
4 5 6
7 8 9 10
printing floyd's triangle
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int number =1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<number<<' ';
            number++;
        }
        cout<<endl;
    }
    return 0;
}