// use only when the matrix is sorted matrix



#include<iostream>
using namespace std;
int main()
{
   
    int n,m;
    cin>>n>>m;
    
    int arr[n][m];

    //taking array form user

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    int target;
    cin>>target;

    //for searching the target in the matrix
     int r=0,c=m-1;
     bool flag=false;
     while(r<n & c>=0)
     {
         if(arr[r][c]==target)
         {
             flag=true;
         }
         if(arr[r][c]>target)
         {
             c--;
         }
         else{
             r++;
         }
     }
     if(flag= true)
     {
         cout<<"The element is found";
     }
     else
     {
         cout<<"The element is not in the array";
     }




    return 0;
}