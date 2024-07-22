#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void inticounter(void)
    {
        counter = 0;
    }
    void setprice();
    void displayprice();
};

void shop ::setprice()
{
    cout << "Enter the Id of your item no " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the price of the item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop ::displayprice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Price of the item with Id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    shop dukaan;
    dukaan.inticounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();

    return 0;
}