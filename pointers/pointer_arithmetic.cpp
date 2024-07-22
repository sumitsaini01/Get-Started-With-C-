// we can only use ++,--,+,- on pointers
//if we increase the value of any pointer then its value will increase with respect to data type 
//for example if we increase the value of pointer "int *aptr" then its value will increase by 4 bites because int takes 4 bites 

#include<iostream>
using namespace std;
int main()
{ int a=10;
   int *aptr;
   cout<<aptr<<endl;

   aptr++;      //bying doing this we increase the value of aptr not the value of a

  cout<<aptr<<endl;


    return 0;
}