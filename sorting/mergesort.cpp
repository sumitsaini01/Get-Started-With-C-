/*the code is not working
dont know why
there is no error in the code*/

#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2]; // temp arrays

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + 1];
    }

    for (int j = 0; j < n2; j++)
    {
        b[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }

    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }

    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergesort(int arr[], int l, int r)
{

    if (l < r)
    {
        int mid = (l + r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}
void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

int main()
{
    /*  int n;
      cout<<"enter the size of array"<<endl;
      cin>>n;

      int arr[n];
      cout<<"enter the elements of array"<<endl;

      for(int i=0;i<n;i++)
      {
          cin>>arr[i];
      }*/
    int arr[] = {45, 52, 42, 2, 36};

    display(arr, 5);
    cout<<endl;

    mergesort(arr, 0, 5);
    display(arr, 5);

    /*mergesort(arr,0,4);

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;*/

    return 0;
}