#include <iostream>
using namespace std;
int main()
{

    int n, i, sum=0;
    cout << "Enter the number";
    cin >> n;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == n)
        cout << "perfect number";
    else
        cout << "Not a perfect Number";
    return 0;
}