#include<iostream>
using namespace std;

void display(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
}
  void insertion(int arr[],int size,int index,int element)
{  
    for(int i=size;i>=index;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[index]=element;
   
}

int main()
{
    int size;
    cout<<"enter the capacity of array"<<endl;
    cin>>size;

    int arr[100];
    cout<<"enter the elements of array"<<endl;

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    int index;
    cout<<"enter the index on which you wanna add the element "<<endl;
    cin>>index;

    int element;
    cout<<"enter the element which you wanna add "<<endl;
    cin>>element;
     

    insertion(arr, size, index, element);
    size = size+1;

    display(arr, size);

    return 0;
}