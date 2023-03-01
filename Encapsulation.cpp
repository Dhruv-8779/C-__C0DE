#include<bits/stdc++.h>
using namespace std;
 class thef 
 {
     private:
     string name,address; //100% secure k liye encapsulation ka use 
        // kia jata hai;
     int mob;
     public:
     void input(){
        name="Ompho";
        address="pondanala road:";
        mob=1251526026;
     }
     void output(){
      cout<<"chor name is:"<<" "<<name<<endl;
       cout<<"chor address is:"<<" "<<address<<endl;
        cout<<"chor mob is:"<<" "<<mob<<endl;
     }
 };
  class police: public thef
  {

  };
int main()
{
    police p;
    p.input();
    p.output();
//  thef t;
//  t.input();
//  t.output();
    return 0;
}