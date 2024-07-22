#include <iostream>
using namespace std;
  
int main()
{
     cout<<"Name: Naina Bagri"<<endl;
    cout<<"UID: 21BCS11387"<<endl;
    cout<<"section: 807-A"<<endl;
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 4;
    int N = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < N; i++)
        if (arr[i] == x)
        cout<<"the index of the element is: "<<i;
 
    return 0;
}