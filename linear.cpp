#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;


    int arr[n];
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int x;
    cout<<"enter the number which u wanna find in array"<<endl;
    cin>>x;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            cout<<"the element is present at index:"<<i;
        }
    }
    return 0;
}