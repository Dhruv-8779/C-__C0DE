#include<iostream>
using namespace std;
int main()
{
 int n,r,arm=0,c;
 cout<<"Enter any number";
 cin>>n;
 c=n;
 while (n>0)
 {
     r=n%10;
     arm=(r*r*r)+arm;
     n=n/10;
     
 }
 if(c==arm)
 cout<<"Armstrong number";
 else{
     cout<<"Not";
 }
    return 0;
}