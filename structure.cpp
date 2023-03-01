#include<iostream>
using namespace std;
 struct employ
 {
 int id;
 char name[20];
 float sal;
 
 };

int main()
{
 struct employ e;
  e.id=36;
 (e.name,"dhruv");
  e.sal=50000.78;
  cout<<"id"<<endl<<e.id;
  cout<<"name"<<endl<<e.name;
  cout<<"salary"<<endl<<e.sal;

    return 0;
}