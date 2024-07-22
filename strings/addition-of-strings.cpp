#include <iostream>
using namespace std;
int main()
{
    // append of strings
    string s1 = "fam";
    string s2 = "ily";

    // by addition we can also get the same result as that of by using append
    cout << s1 + s2 << endl;

    s1.append(s2); // s1 me s2 string ko append kra rhe hai
    cout << s1 << endl;

    return 0;
}