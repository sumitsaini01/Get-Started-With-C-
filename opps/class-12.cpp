#include <iostream>
using namespace std;

class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int SumRealComplex(complex, complex);
};

class complex
{
    int a, b;
    friend int calculator ::SumRealComplex(complex, complex);

public:
    void setnumber(int n, int m)
    {
        a = n;
        b = m;
    }

    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int calculator ::SumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 5);
    o2.setnumber(4, 9);
    calculator calc;
    int res = calc.SumRealComplex(o1, o2);
    cout << "The Sum of real part of o1 and o2 is " << res << endl;
    return 0;
}