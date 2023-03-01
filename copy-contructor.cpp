#include <bits/stdc++.h>
using namespace std;
class A
{
    int x, y;

public:
    A(int a, int b) // Parameterized constructor
    {
        x = a;
        y = b;
        cout << x << " " << y << endl;
    }
    A(A &ref) // copy constructor
    {
        x = ref.x;
        y = ref.y;
        cout << x << " " << y;
    }
};
int main()
{
    A obj(10, 20);
    A onj2 = obj;
    return 0;
}