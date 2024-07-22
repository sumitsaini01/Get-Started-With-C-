#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of n" << endl;
    cin >> n;

    int arr[n];
    cout << "enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // time complexcity =O(n^2)
    // bubble sort
    for (int i = 0; i < n - 1; i++)
    // outer loop for traversing the array
    {
        for (int j = 0; j < n - i - 1; j++)
        // inner loop for sorting
        {
            if (arr[j] > arr[j + 1])
            {
                // swap
                /*int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;*/
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}