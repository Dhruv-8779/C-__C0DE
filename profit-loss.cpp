#include <iostream>
using namespace std;
int main()
{
    int cp, sp, p, l;
    cout << "enter cost price";
    cin >> cp;
    cout << "enter shelling price";
    cin >> sp;
    p = sp - cp;
    l = cp - sp;
    if (sp == cp)
        cout << "No profit";
    else if (sp > cp)
        cout << "profit";
    else
        cout << "loss";

    return 0;
}