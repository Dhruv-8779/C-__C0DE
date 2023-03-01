#include <iostream>
using namespace std;
int main()
{
    int a[10], i;
    cout << "Enter array element";
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < 5; i++)
    {
        cout << endl
             << a[i];
    }

    return 0;
}