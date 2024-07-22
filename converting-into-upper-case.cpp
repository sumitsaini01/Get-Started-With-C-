//cout<<'A'-'a'<<endl;  -to find aaskai value or difference in lower case and upper case 


#include<iostream>
using namespace std;
int main()
{ 
    string str="hfihnisifin";

    //convert into upper case 

    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a'&& str[i]<='z')   // we will work form a to z only 
        {
            str[i] -=32;      //subtracting aaskai value from the lower case letters
        }
    }
    cout<<str<<endl;


    //converting into lower case again

    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='A' && str[i]<='Z')    //we will work form A to Z only 
        {
            str[i] +=32;    //adding aaskai value to upper case letter
        }
    }

    cout<<str<<endl;


    return 0;
}