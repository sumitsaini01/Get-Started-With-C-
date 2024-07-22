// array of objects

#include <iostream>
using namespace std;

class student
{
    int id;
    int fee;

public:
    void getdata(void)
    {
        cout << "Enter the id of the student " << endl;
        cin >> id;
        fee = 122;
    }
    void setdata()
    {
        cout << "The Id of this student is " << id << endl;
    }
};

int main()
{
    student LPU[4];
    for (int i = 0; i < 4; i++)
    {
        LPU[i].getdata();
        LPU[i].setdata();
    }

    return 0;
}