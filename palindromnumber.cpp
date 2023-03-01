#include<iostream>
using namespace std;
int main()
{
int n,r,sum=0,c;
cout<<"enter any number";
cin>>n;
c=n;
while (n>0)
{
  r=n%10;
  sum=r+(sum*10);
  n=n/10;
}
if(c==sum)
cout<<"palindrom number";
else
 cout<<"Not a palindrom number";
    return 0;
}