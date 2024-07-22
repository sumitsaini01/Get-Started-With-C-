// nesting of member functions 

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;
    void chk_bin(); // chk_bin cannt be called directly form outside of the class

public:
    void read();
    void ones();
    void display();
};

void binary ::read()
{
    cout << "enter the string s" << endl;
    cin >> s;
}

void binary ::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "the string is not in proper binary form" << endl;
            exit(0);
        }
    }
}

void binary ::ones()
{
    chk_bin(); // we can also call a function inside of a function in classess
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary n;
    n.read();
    n.display();
    // n.chk_bin();
    n.ones();
    n.display();

    return 0;
}