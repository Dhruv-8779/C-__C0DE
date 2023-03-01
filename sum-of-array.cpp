#include <iostream>
using namespace std;
int main()
{
    // int a[5],sum=0,i;
   
    int a[5];
    int sum = 0;
    cout << "Enter array element"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout << " sum of array"<<endl;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    cout << endl<< sum;
         }
    return 0;
}