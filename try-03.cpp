//failed😢😢😢

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

   int index;
   cout<<"enter the value of index"<<endl;
   cin>>index;

   int element ;
   cout<<"enter the element "<<endl;
   cin>>element;


   for(int i=0;i<=n;i++)
   {
    if(i<index)
    {
        cout<<arr[i]<<endl;
    }
    else if(i==index)
    {
        cout<<element<<endl;
    }
    else
    {
        cout<<arr[i];
    }
   }

   return 0;
}