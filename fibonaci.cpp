#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, b = 1, c; // fabonaci iteration method
    cout << "Enter a number of term"<<" ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << endl  << a;
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}