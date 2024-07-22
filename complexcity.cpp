#include <iostream>
using namespace std;

void Counts(int *arr, int n)
{
    int freq[n] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[arr[i] - 1]++; 
    }

    cout << "\nFrequencies of the array elements:\n";
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << " -> " << freq[i] << endl;
    }
}

int main()
{
    int arr1[] = {6, 3, 0, 2, 5, 6};
    Counts(arr1, sizeof(arr1) / sizeof(arr1[0]));

    int arr2[] = {1};
    Counts(arr2, sizeof(arr2) / sizeof(arr2[0]));

    int arr3[] = {1, 3, 3, 2};
    Counts(arr3, sizeof(arr3) / sizeof(arr3[0]));

    int arr4[] = {4, 2, 1, 6, 4, 1, 4, 2, 4};
    Counts(arr4, sizeof(arr4) / sizeof(arr4[0]));

    return 0;
}
