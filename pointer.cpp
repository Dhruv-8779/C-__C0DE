#include<iostream>
using namespace std;
int main()
{
 int *p, *q;
 int a,b,c;
 cout<<"enter two number";
 cin>>a>>b;
 p=&a;
 q=&b;
 c=*p+*q;
 cout<<"pointer addition"<< endl<<c;
    return 0;
}