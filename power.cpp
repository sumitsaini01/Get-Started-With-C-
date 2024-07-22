#include <iostream>
using namespace std;
int power(int x, unsigned int n)
{
    int temp;
    if(n==0)
    {
        return 1;
    }
    temp = power(x,n/2);
    if(n%2==0)
    {
        return temp*temp;
    }
    else
    {
        return x*temp*temp;
    }
}
int main()
{
    int x,n;
    cout<<"Enter value of x"<<endl;
    cin>>x;
    cout<<"Enter vale of n"<<endl;
    cin>>n;
    cout<<power(x,n);
    return 0;
}
/*
int main()
{
    int arr[] = {1, 2, 3, 2, 1, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int freq[n];
    for (int i = 0; i < n; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << i << ":" << freq[i] << endl;
    }
    return 0;
}*/