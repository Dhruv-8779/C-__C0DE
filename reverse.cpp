#include <bits/stdc++.h>
using namespace std;
void reverse(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
int gatelength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "Enter the name";
    cin >> name;
    cout << "your name" << endl;
    cout << name;
    int len = gatelength(name);
    cout << "length " << endl
         << len << endl;
    reverse(name, len);
    cout << "your name" << endl;
    cout << name;

    return 0;
}