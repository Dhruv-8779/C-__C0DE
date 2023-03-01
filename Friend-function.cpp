#include<bits/stdc++.h>
using namespace std;
 class Dhruv 
 {
    private: 
     string tv;
     public:
      void show()
      {
          tv="IPL final 2021:";
      }
     friend void DC(Dhruv r);
 };
 void DC(Dhruv r)
 {
 cout<<" I'm DC now i,watching! "<<r.tv;
 }
int main()
{
 Dhruv obj;
 obj.show();
 DC(obj);
    return 0;
}