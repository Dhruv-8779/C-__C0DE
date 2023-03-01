#include<bits/stdc++.h>
using namespace std;
class A
  {
      int a,b,ans;
      public:
    A() //default constructor ko call ni krna padta 
    {
     int a,b;
     cout<<"Enter two number:"<<" ";
     cin>>a>>b;
     ans=a/b; 
     cout<<ans;
    }

  };
int main()
{
  A obj;
    return 0;
}
// the  main purpose of constructor  inicilize the object;