 #include <iostream>
using namespace std;
 
int binarySearch(int arr[], int h, int l, int x)
{
    while (h <= l) {
        int m = h + l / 2;
  
        if (arr[m] == x)
            return m;
  
        if (arr[m] < x)
            h = m + 1;
  
        else
            l = m - 1;
    }
  
    return -1;
}
 
int main()
{
    int n;
    cout<<"enter the size of ana array"<<endl;
    cin>>n;

    //int n = sizeof(arr) / sizeof(arr[0]); 
    //from above method we can also find the size of an array

    int arr[n];
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int x;
    cout<<"enter the number which u wanna find in array"<<endl;
    cin>>x;
     
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}