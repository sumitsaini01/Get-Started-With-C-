#include<iostream>
#include<algorithm>    //in this header file sort function is inbuilt
using namespace std;
int main()
{

    string s="jnjnenkfkwjenf";
    sort(s.begin(), s.end());  //s.begin gives us starting index of the string(from where sorting is to be started)
    cout<<s<<endl;      //s.end gives us endding index of the string(from where sorting is to be ended)
    return 0;
}