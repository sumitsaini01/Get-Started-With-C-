#include<iostream>
using namespace std;
void swap(int *a, int *b)   //here in function we use call by referenec 
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a=3,b=4;
    int *aptr= &a;   //we can also use &a in place of *aptr
    int *bptr= &b;   //we can also use &b in place of *bptr

    swap(aptr,bptr);
    cout<<a<<' '<<b;
    return 0;
}