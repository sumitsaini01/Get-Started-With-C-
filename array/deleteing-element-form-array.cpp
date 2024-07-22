#include<iostream>
using namespace std;


void display(int array[],int size)
{
  for(int i=0;i<size;i++)
  {
    cout<<array[i];
  }
}

void intdeletion(int array[], int size,int index)
{
  for(int i=index;i<size-1;i++)
  {
    array[i]=array[i+1];
  }
}

int main()
{
  /*int size;
  cout<<"enter the size of array"<<endl;
  cin>>size;

  int arr[size];
  cout<<'enter the elements of array'<<endl;

  for(int i=0;i<size;i++)
  {
    cin>>arr[i];
  }

  int index;
  cout<<"enter the index on which you wanna delete the element";
  cin>>index;
*/
   int size=5;

   int arr[100]={1,2,3,4,5};

   int index=3;

   
  intdeletion(arr,size,index);

  size=size-1;

  display(arr,size);


  return 0;
}