#include<bits/stdc++.h>
using namespace std;
 class A
 {
  public: 
  void person(){
      cout<<"Good morning janu:"<<endl;
  }
 };
 class B : public A
 {
  void person()
      {
          cout<<"Good night pgli:";
      }
 };
int main()
{
  B obj; 
//   obj.person();
 obj.A::person();
 return 0;
}