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

    for(int i=0;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(j>=0 && current<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        //placement
        arr[j+1]=current;
    }

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}