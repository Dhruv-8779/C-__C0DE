#include <iostream>
using namespace std;
int main()
{
    int a[5];
    cout << "enter array element";
    for ( int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout << "reverse array element";
    for ( int i = 5; i > 0; i--)
    {
        cout << endl << a[i];
    }

    return 0;
}