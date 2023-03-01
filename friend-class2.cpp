#include<bits/stdc++.h>
using namespace std;
 class A
 {
  private:
    int a,b;
    public:
    void inputdata()
    {
        cout<<"Enter two number:";
       cin>>a>>b;
    }
    friend class B;
 };
 class B {
  private:
     int c;
     public:
     void setdata(A r){
         c=r.a%r.b;
         cout<<c;
     }
 };
  int main()
  {
   A a;
   a.inputdata();
   B b;
   b.setdata(a);
      return 0;
  }
