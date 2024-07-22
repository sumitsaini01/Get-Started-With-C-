#include <iostream>
using namespace std;
int main()
{
    string s1 = "abc";
    string s2 = "xyz";

    cout << s2.compare(s1) << endl; // s2 ko s1 se compare kr rhe hai

    string s3 = "abc";

    if (s3.compare(s1) == 0)
    { // if se b kr skte hai or yha 0 false ko represent nhi kr rha hai
        cout << "strings are equal" << endl;
    }

    if (!s3.compare(s1))
    {
        cout << "strings are equal" << endl;
    }

    cout << s1.compare(s2) << endl; // s1 ko s2 se compare kr rhe hai

    // empty function on strings

    cout << s1 << endl;
    s1.clear(); // clearing the string by using clear function

    if (s1.empty()) // checking the string is empty or not
    {
        cout << "the string is empty" << endl;
    }

    // erase function in strings
    string s8 = "diueiiuehdihuie";

    s8.erase(3, 5);     // first the index of the word form where u wanna start erase and then how many words to wanna erase
    cout << s8 << endl; // like in this i wanna erase from e and want to erase 5 words

    // checking that sub string of the string is present or not
    // koi word string me h ya nhi

    string s9 = "sumitsaini";
    cout << s9.find("aini") << endl; // use find function and pass the word which u wanna check in bracket in double quts
    // find function gives the index of the starting letter

    // inserting string in another string
    s9.insert(2, "lol"); // first arrgument for index (from where u want to start inserting that string)
    cout << s9 << endl;  // second arrgument for the string which u wanna insert

    // finding the length of the string

    cout << s1.length() << endl; // we can also use size in place of lenght
    cout << s2.size() << endl;
    cout << s3.length() << endl;
    cout << s8.size() << endl;
    cout << s9.length() << endl;

    // we can also use lenght to iterate
    for (int i = 0; i < s9.length(); i++)
    { // in this way it is very usefull
        cout << s9[i] << endl;
    }

    // creating sub string of a string
    string s = s9.substr(4, 5); // first arrgument for the index (from where u wanna start that sub string)
    cout << s << endl;          // second arrgument for how many words u want in that sub string

    // converting string to integer

    string s6 = "1202";
    int x = stoi(s6);      // stoi means string to integer
    cout << x + 2 << endl; // here + is working as addition

    // converting integer to string(to_string)
    int y = 988;
    cout << to_string(y) + "2" << endl; // here + is working as append

    return 0;
}