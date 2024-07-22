#include<iostream>
using namespace std;
 int main()
 {
    cout<<"Name: Naina Bagri"<<endl;
    cout<<"UID: 21BCS11387"<<endl;
    cout<<"section: 807-A"<<endl;
    int n;
    cout<<"enter the size of array"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the elements of array"<<endl;  
    for(int i=0;i<n;i++)                        
    {                                         
        cin>>arr[i];                            
    }

    int element;
    cout<<"enter the element which you wanna find in array"<<endl;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        if(arr[i]==element)
        {
            cout<<"the element is found at index:"<<" "<<i;
            break;
        }
    }

    return 0;
 }