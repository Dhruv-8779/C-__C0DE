#include<iostream>
using namespace std;
int main()
{
 int i,j;
 for(i=1;i<=20;i++)
 {
     for (j=20;j>=i;j--)
     {
         cout<<" *";
     }
     cout<<endl;
 }
    return 0;
}