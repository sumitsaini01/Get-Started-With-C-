//finding prime number by sieve of eratosthenes principle

#include<iostream>
using namespace std;

void primesieve(int n)
{
    int prime[]={0};    //taking an array of size 100

    for(int i=0;i<=n;i++)  
    {
        if(prime[i]==0)     // checking that the element is unmarked (0 means unmarked and 1 means marked)
        {
            //if prime of i is unmarked then we will mark all its multiple 
            for(int j=i*i;j<=n;j+=i)   //we will take jumps in terms of i (1 ki humhe i ke sare multiples of cross out krna hai)
            {
                prime[j]=1;   
            }
        }
    }
    for(int i=2;i<=n;i++)  //printing the unmarked(prime) number
    {
        if(prime[i]==1)
        {
            cout<<i<<' ';
        }
    }
    cout<<endl;

}
int main()
{
    int n;
    cin>>n;

    primesieve(n);


    return 0;
}