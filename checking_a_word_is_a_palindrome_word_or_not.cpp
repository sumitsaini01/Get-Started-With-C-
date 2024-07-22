//palindrome word is a word which remeins same on reading from both sides 
#include<iostream>
using namespace std;
int main()
{
    //taking size of the word form useer 
    int n;
    cin>>n;
    // taking word from user 
    char arr[n+1];
    cin>>arr;
   //taking a flag to check the loop will break or not 
   bool flag=1;                   //taking flag as ture thinking of that the loop will not break
   for(int i=0;i<n;i++)
   {
        if(arr[i] != arr[n-1-i])
    {
         flag=0;         //if the above condition is true then the loop will break in that case the flag is false
         break;
    }
   }
   if(flag == 1)   
   {
    cout<<"the word is a palindrome word";
   }
   else{
    cout<<"the word is not a palindrome word";
   }
   return 0;
}