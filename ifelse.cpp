#include<iostream>
using namespace std;
int main()
{   

    freopen("input.txt","r", stdin);
    freopen("output.txt","w", stdout);
    int a,b;
    cin>>a>>b;
    char op;
   // cout<<"enter the op which wanna do "<<endl;
    cin>>op;
    switch ( op)
    {
    case '+':
    cout<<a+b;
    break;
    case '-':
    cout<<a-b;
    break;
    case '*':
    cout<<a*b;
    break;
    case '/':
    cout<<a/b;
    break;
    }
    return 0;

}