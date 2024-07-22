//transform is a inbuilt function of algorithm header file


#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main()
{
    string s="jhsbdjwbsj";

    //converting into upper case

    transform(s.begin(), s.end(), s.begin(), :: toupper);  //inbuilt function in algorithm header file
    /* first arrgument (s.begin(), s.end()) for the starting and ending iterator  
      second arrgument (s.begin, ::toupper) from where u want to start and in which case u want it */

    cout<<s<<endl;


    //converting into lower case 

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout<<s<<endl; 

    return 0;
}