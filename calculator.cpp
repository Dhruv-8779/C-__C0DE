#include <iostream>
using namespace std;
int main()
{
    int a, b, ch, add, sub, div, multi, rem;
    cout << "Enter user choice number";
    cin >> ch;
    cout << "Enter two number";
    cin >> a >> b;
    if (ch == 1)
    {
        add = a + b;
        cout <<" Addition "<< add;
    }
    else if (ch == 2)
    {
        sub = a - b;
        cout << "subtraction" << sub;
    }
    else if (ch == 3)
    {
        div = a / b;
        cout << "division" << div;
    }
    else if (ch == 4)
    {
        multi = a * b;
        cout << "multiplication" << multi;
    }
    else if (ch == 5)
    {
        rem = a % b;
        cout << "modulus" << rem;
    }
    else
    {
        cout << "default";
    }

    return 0;
}