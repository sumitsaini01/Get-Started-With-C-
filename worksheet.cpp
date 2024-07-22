#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << " enter the size of the array" << endl;
    cin >> size;
    int a[size];
    cout << "enter the elements of the array" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }
    int n;
    cout << "1. Insert a new element at end as well as at a given position" << endl;
    cout << "2. Delete an element from a given whose value or whose position is given" << endl;
    cout << "3. To find the location of a given element" << endl;
    cout << "4. To display the elements of the linear array" << endl;
    cout << "Select between 1 to 4" << endl;
    cin >> n;

    switch (n)
    {
    case 'n=1':
    {
        int ch;
        cout << "Type 0 for inserting element at the end" << endl;

        cout << "Type 1 for inserting element at specific position" << endl;
        cin >> ch;
        if (ch == 0)
        {
            int num;
            cout << "Enter the element to insert - " << endl;
            cin >> num;
            int l = size;
            a[l] = num;
            cout << "The new array is - " << endl;
            for (int j = 0; j < size + 1; j++)
            {
                cout << a[j] << " ";
            }
        }
        else
        {
            int position, number, i;
            int a[size];
            cout << "Enter the element to insert - ";
            cin >> number;
            cout << "Enter the position at which you want to insert the new element- ";
            cin >> position;
            if (position > size + 1)
            {
                cout << "Insertion is not possible";
            }
            else

            {
                for (i = size; i >= position; i--)
                {
                    a[i] = a[i - 1];
                }
                a[i] = number;
            }
            cout << "The new array is - " << endl;
            for (int j = 0; j < size + 1; j++)
            {
                cout << a[j] << " ";
            }
        }
        break;
    }
    case 'n=2':

    {
        int position;
        cout << "Enter the position - ";
        cin >> position;
        if (position >= size + 1)
        {
            cout << "Deletion not possible ! " << endl;
        }
        else
        {
            for (int c = position - 1; c <= size - 1; c++)
            {
                a[c] = a[c + 1];
            }
        }
        cout << "The new array is - " << endl;
        for (int k = 0; k < size - 1; k++)
        {
            cout << a[k] << " ";
        }
        break;
    }
    case 'n=3':
    {
        int num;
        cout << "Enter a number to search in Array" << endl;
        cin >> num;
        for (int i = 0; i < size; i++)
        {
            if (a[i] == num)
            {
                cout << "the element is at index" << i << endl;
            }
            else
            {
                cout << "the element is not present in the array" << endl;
            }
        }
        break;
    }
    case 'n=4':
    {
        cout << "The Array is - " << endl;
        for (int k = 0; k < size; k++)
        {

            cout << a[k] << " ";
        }
        break;
    }
    }

    return 0;
}