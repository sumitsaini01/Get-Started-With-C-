//time complexcity=O(n^2)

#include<iostream>
using namespace std;
int main()
{
     int n;
    cout<<"enter the size of n"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    //selection sort
    for(int i=0;i<n-1;i++)
    //for traversing 
    {
        int smallest=i;
        for(int j=i+1;j<n;j++)
        //for sorting 
        {
            if(arr[smallest]>arr[j])
            {
              smallest=j;
            }
        }
        //swaping
        int temp=arr[smallest];
        arr[smallest]=arr[i];
        arr[i]=temp;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }

    return 0;
}