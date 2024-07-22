//also cout in the function if u wanna see the change 


#include<iostream>
using namespace std;
void swap(int a, int b){
    int temp=a;
    a=b;
    b=temp;
    cout<<a<<' '<<b<<endl;   //to print the value of a and b in the function/its like returing a value   

}
int main()
{
    int a=3;
    int b=4;

    swap(a,b);  //if we cout here then a and b are local variables and the value cannt b swap
    return 0;
}