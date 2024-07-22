//defining pointer 

#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *aptr;   //defining pointer
    aptr=&a;    //" &  "gives the address of the variable
     
     cout<<&a<<endl;        //gives the address of the variable
    cout<<aptr<<endl;      //gives the address where the value of a is store 
    cout<<*aptr<<endl;     //gives the value of a 

    //we can also update the value of a using pointer

    *aptr=20;
     cout<<*aptr<<endl;   //in this way we can update the value of a using pointer

    return 0;
}