#include <bits/stdc++.h>
using namespace std;
class Abdulla
{
protected:
    int a;

public:
    void money()
    {
        a = 50;
        cout << a << endl;
    }
};
class Adarsh
{
protected:
    int b;

public:
    void money1()
    {
        b = 100;
        cout << b << endl;
    }
};
class Aman
{
protected:
    int c;

public:
    void money2()
    {
        c = 200;
        cout << c << endl;
    }
};
class Sanu : public Abdulla, public Adarsh, public Aman
{
public:
    void output();
};
void Sanu ::output()
{
    int d = 500;
    cout << d;
}
int main()
{
    Sanu o;
    o.money();
    o.money1();
    o.money2();
    o.output();
    return 0;
}