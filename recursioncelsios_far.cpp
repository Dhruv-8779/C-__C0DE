#include <bits/stdc++.h>
using namespace std;
int convertcelsios(float celsius)
{
    float far = celsius * (9.0 / 5.0) + 32;
    return far;
}
int main()
{
    float far = convertcelsios(37);
    cout << endl << far;
    return 0;
}