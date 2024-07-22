//in function we will called the variable by their value (call by value)


#include<iostream>
using namespace std;
void increament(int a){
    a++;
}
int main()
{   
    int a=2; 
    increament(a);    
    cout<<a<<endl;   //here the value of a will be 2 because the variable a is a local variable 

     
    return 0;
}