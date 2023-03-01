#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter the number";
    cin >> n;
    while (n > 0)
    {
        n = n / 10; //10/10=1
        count++; /* code */
    }
    cout << "total number of digits" << endl
         << count;
    return 0;
}