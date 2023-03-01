#include<bits/stdc++.h>
using namespace std;
 class A { // base class
          protected: // multilevel inheritance
         int a,b;
         public:
         void input(){
             cout<<"Enter two number:"<<" ";
             cin>>a>>b;
         }
 };
  class B : public A // derived class
  {
      protected:
      int c;
      public:
      void add(){
          c=a+b;
          cout<<"Addition:"<<" "<<c<<endl;
      }
      void sub(){
          c=a-b;
          cout<<"Subtraction:"<<" "<<c<<endl;
      }
  };
  
  class C : public B // derived class
  {
    public:
    void mul(){
          c=a*b;
          cout<<"MUltiplication:"<<" "<<c<<endl;
      }
      void div(){
          c=a/b;
          cout<<"Division:"<<" "<<c<<endl;
      }
       void modul(){
          c=a%b;
          cout<<"Modulus:"<<" "<<c<<endl;
      }
  };
  
int main()
{
   C obj;
   obj.input();
   obj.add();
   obj.sub();
   obj.mul();
   obj.div();
   obj.modul();
   
    return 0;
}