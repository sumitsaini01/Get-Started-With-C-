#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the value of n";
    cin>>n;
    bool flag=false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
             
            flag =false;
            break;
        }
        
    }
    if(flag==true)
    {
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}