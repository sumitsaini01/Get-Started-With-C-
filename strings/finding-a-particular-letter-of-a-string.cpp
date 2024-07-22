#include<iostream>
using namespace std;
int main ()
{

    //finding a word in the string 
    string s1="family";
    cout<<s1[2]<<endl;    //like an array 


    //clearing the string 
    s1.clear();
    

    //comparing 2 strings
    string s3="abc";
    string s2="xyz";

    cout<<s2.compare(s3)<<endl;    //s2 ko compare kr rhe hai s3 se
 


    return 0;
}