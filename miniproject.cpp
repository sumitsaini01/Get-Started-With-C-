#include <iostream>
#include <math.h>        // for exp
#include <cmath>         // for square root
#include <bits/stdc++.h> //for cube root
using namespace std;

void prime(int n)
{
    int flag = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Number is not Prime." << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "Number is Prime." << endl;
    }
    return;
}

void bin(unsigned n)
{
    if (n > 1)
        bin(n / 2);
 
    cout << n % 2;
     
     
}

int main()
{

    char op;
    int num1, num2;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    cout << "Enter operator: +, -, *, /, P, E, S, C, B: ";
    cin >> op;

    switch (op)
    {

    case '+':
        cout << num1 + num2;
        break;

    case '-':
        cout << num1 - num2;
        break;

    case '*':
        cout << num1 * num2;
        break;

    case '/':
        cout << num1 / num2;
        break;

    case 'P':
        prime(num1);
        prime(num2);
        break;

    case 'E':
        cout << exp(num1);
        cout<<endl;
        cout << exp(num2);
        break;

    case 'S':
        cout << sqrt(num1);
        cout << endl;
        cout << sqrt(num2);
        break;

    case 'C':
        cout << cbrt(num1);
        cout << endl;
        cout << cbrt(num2);
        break;

    case 'B':
        bin(num1);
        cout<<endl;
        bin(num2);
        break;

    default:
        // If the operator is other than +, -, * or /, error message is shown
        cout << "Error! operator is not correct";
        break;
    }

    return 0;
}