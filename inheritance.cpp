#include<bits/stdc++.h>
using namespace std;
 class Dad
 {
     protected:
    int amount;
    string gold;
    public:
    void input(){
        amount=10000;
        gold="sona chandi";
    }
 };
 class Son : public Dad
 {
  int money=1200;
  public:
  void show(){
  cout<<"son money:"<<" "<<money<<endl;
  cout<<"father money:"<<" "<<amount<<endl;
  cout<<"father property:"<<" "<<gold;
  }
 };
int main()
{
 Son s;
 s.input();
 s.show();
    return 0;
}