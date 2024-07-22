#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30};
    cout<<*arr<<endl;   //*arr behave like pointers

    int *ptr=arr;        //in this way we can print the array with the help of pointers
    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<endl;
        ptr++;             //increament of pointer to jump on the next value 
    }
    
    for(int i=0;i<3;i++)     //in this way we can print the array with the help of *arr
    {
        cout<<*(arr+i)<<endl;    //here arr is indexing point 
       // arr++ is illegal
    }


    return 0;
}