#include<iostream>
using namespace std;
int main()
{   

    //give the size and the letter in brackets 
    string str1(5, 'i');     //first size of string then in single course the letter which we want to print 
    cout<<str1<<endl;

    //gives direct value to string 
    string str2="SUMIT";
    cout<<str2<<endl;

    // to take a sentence as a input in string
    string str;
    getline(cin, str);   //in brackets first cin then name of the string in which we have to store that sentance 
    cout<<str<<endl;



    return 0;
}