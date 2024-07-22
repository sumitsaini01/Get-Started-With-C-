// complex class

#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    void getdata(int n, int m)
    {
        a = n;
        b = m;
    }

    void setdatabysum(complex a1, complex b1)
    {
        a = a1.a + b1.a;
        b = a1.b + b1.b;
    }

    void display()
    {
        cout << "The complex number is " << a << " +i" << b << endl;
    }
};

int main()
{
    complex i1, i2, i3;

    i1.getdata(2, 3);
    i1.display();

    i2.getdata(4, 6);
    i2.display();

    i3.setdatabysum(i1, i2);
    i3.display();

    return 0;
}