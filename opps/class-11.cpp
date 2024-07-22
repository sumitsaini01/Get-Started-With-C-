// friend function

#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    friend complex sumcomplex(complex o1, complex o2);
    void setdata(int n, int m)
    {
        a = n;
        b = m;
    }

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex c1, c2, sum;
    c1.setdata(5, 4);
    c1.printnumber();

    c2.setdata(1, 8);
    c2.printnumber();

    sum = sumcomplex(c1, c2);
    sum.printnumber();

        return 0;
}