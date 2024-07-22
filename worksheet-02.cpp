#include <iostream>
using namespace std;
void linear(int arr[], int size, int find)
{
    for (int j = 0; j < size; j++)
    {
        if (arr[j] == find)
        {
            cout << find << " at position " << j << endl;
        }
    }
}
void binary(int arr[], int n, int find)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == find)
        {
            cout << find << " at position " << mid + 1 << endl;
            break;
        }
        else if (arr[mid] < find)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
}
int main()
{
    int m;
    cout << "enter the size of the array" << endl;
    cin >> m;
    int array[m];
    cout << "enter the elements of the array" << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> array[i];
    }
    int find;
    cout << "enter the element which you wanna find in the array" << endl;
    cin >> find;
    int j;
    cout << "1. linear search" << endl;
    cout << "2. binary search " << endl;
    cin >> j;
    if (j == 1)
    {
        linear(array, m, find);
    }
    if (j == 2)
    {
        binary(array, m, find);
    }
    return 0;
}