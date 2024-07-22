#include<iostream>
using namespace std;
int main()
{
    
    int n;
    cout<<"enter the size of ana array"<<endl;
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

    int low=0;
    int high=n;

    while (high-low>1)
    {
       int mid=(high+low)/2;

       if(arr[mid]==x)
       {
        cout<<"the element is present at index:"<<mid;
       }
       else if(arr[mid]<x)
       {
        low=mid+1;
        
       }
       else
       {
        high=mid-1;
       
       }
    }

    return 0;
    
}