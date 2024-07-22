#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
int main()
{
    string s="51615611641651";

    //converting into greatest number
    sort(s.begin(), s.end(), greater<int>());  //third arrgument for sorting in decreasing order

    cout<<s<<endl;


    return 0;
}