#include<iostream>
using namespace std;
int main()
{
 char i,j,count='A';
 for (i='A'; i<='E'; i++)
 {
    for (j='A';j<=i;j++)
    {
     cout<<count;
     ++count;
    }
  cout<<endl;   
 }
 
    return 0;
}