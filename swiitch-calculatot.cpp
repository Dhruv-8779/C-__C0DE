#include <iostream>
using namespace std;
int main()
{
    int ch, a, b, c;
    cout << "Enter user choice";
    cin >> ch >> a >> b;

    switch (ch)
    {
    case 1:
        c = a + b;
        cout << "addition" << c;
        break;
    case 2:
        c = a - b;
        cout << "subtraction" << c;
        break;

    case 3:
        c = a * b;
        cout << "multiplication" << c;
        break;
    case 4:
        c = a / b;
        cout << "divisiobreak;n" << c;
        break;
    case 5:
        c = a % b;
        cout << "mudulas" << c;
        break;
    default:
        cout << "invalid choice";
        break;
    }
    return 0;
}