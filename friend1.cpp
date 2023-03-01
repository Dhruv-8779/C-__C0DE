#include<bits/stdc++.h>
using namespace std;
 class A
 {
    private:
    int a;
    public:
    int show(){
        a=10;
    }
   friend int B(A r); //friend function
 };
 int B (A r)
 {
     cout<<"tansfer:"<<r.a;
 }
 int main()
 {
     A obj;
     obj.show();
     B(obj);
     return 0; 
 }