#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 1; 1 <= 10; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            if (i == 1 || i == 10 || j == 1 || j == 10)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
    }
    cout << endl;
    return 0;
}