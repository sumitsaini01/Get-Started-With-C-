//👍👍👍
//
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
   cout<<"enter the value element "<<endl;       
   cin>>element;

    for(int i=n;i>=index;i--)
    
        arr[i+1]=arr[i];
        
     arr[index]=element;

    n=n+1;

    for(int i=0;i<n;i++)                 
    {
        cout<<arr[i]<<endl;;
    }

    return 0;
}