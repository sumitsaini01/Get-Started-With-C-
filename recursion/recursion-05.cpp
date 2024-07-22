#include<iostream>
using namespace std;

bool sorted(int array[], int n)
{
    if(n==1)
    {
        return true;
    }

    int restarry = sorted(array+1,n-1);

    return (array[0]<array[1] && restarry);
}

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int array[n];
    for (int i=0;i<=n;i++)
    {
        cin>>array[i];
    }
    cout<<sorted(array, n);
    return 0;
}