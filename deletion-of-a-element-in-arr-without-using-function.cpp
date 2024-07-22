#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int array[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }

    int index;
    cout<<"enter the index on which u wanna delete the element"<<endl;    
    cin>>index;

    for(int i=index;i<n-1;i++)
    {
        array[i]=array[i+1];               
    }

    n=n-1;

    for(int i=0;i<n;i++)
    {
        cout<<array[i];
    }

    return 0;
}