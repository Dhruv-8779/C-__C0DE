#include <iostream>
using namespace std;
int main()
{
    int a, b, r, lcm;
    cout << "enter two number";
    cin >> a >> b;
    while (true)
    {
        lcm = a;
        r = a % b;
        if (r == 0)
        {
            break;
        }
        a = a * 2;
    }
    cout << "lam is :" << endl
         << lcm;
    return 0;
}