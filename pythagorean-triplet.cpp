/*  idea 
a*a =b*b +c*c
where a is max(x,y,z) and b ,c are the other numbers

*/
#include<iostream>
using namespace std;

bool check(int x, int y, int z)
{
    int a= max(x,max(y,z));
    int b,c;
    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=z;
        c=x;
    }
    else{
        b=x;
        c=y;
    }
    if(a*a==b*b+c*c)
    {
       return  true;
    }
    return false;
}

int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    cout<<check(x,y,z);

   return 0;
}