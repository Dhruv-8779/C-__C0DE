#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"enter any term:"<<endl;
 cin>>n;
 int f=n;
 for(int i=1; i<n; i++){
   f=f*i;
 }
  cout<<"factorial of value:"<<f;

    return 0;
}