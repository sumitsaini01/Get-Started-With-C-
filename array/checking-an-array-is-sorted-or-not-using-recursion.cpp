#include<iostream>
using namespace std;

bool sorted(int array[], int n)
{
    if (n==1)
    {
        return true;
    }
    bool restarray =sorted(array+1,n-1);
    return (array[0]<array[1] && restarray);
}

int main()
{
    int array[]={1,2,3,4,56,6,89};
     cout<<sorted(array,7);
     return 0;
}