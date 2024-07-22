#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
    //taking  both the matrix form user
      for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            cin>>m1[i][j];
        }
    }
      for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n3;j++)
        {
            cin>>m2[i][j];
        }
    }
    /*create the answer matrix and giving  value(0) to its element 
    later update the value */
     int ans[n1][n3];
       for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
            ans[i][j]=0;
        }
    }
    /*nestest loop to multiply the matrix
     first loop for row of m1 matrix
     second loop for column of m2 martix
     and third loop to mutliply the elements and updating the answer matrix*/
     for(int i=0;i<n1;i++)
     {
         for(int j=0;j<n3;j++)
         {
             for(int k=0;k<n2;k++)
             { 
                 ans[i][j] +=m1[i][k]*m2[k][j];
             }
         }
     }
      //printing the answer matrix
       for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n3;j++)
        {
             cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}