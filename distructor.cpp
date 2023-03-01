#include<bits/stdc++.h>
using namespace std;
 class A
 {
     int count=0;
    public:
 A()
 {
     cout<<"object"<<" "<<++count<<" "<<"created"<<endl;
 }
  ~A() // distructor ka use memory ko free krne k liye kia jata hai
 {
     cout<<"object"<<" "<<count-- <<" "<<"deleted"<<endl;
 }
};
int main()
{
 A obj1,obj2;
    return 0;
}
