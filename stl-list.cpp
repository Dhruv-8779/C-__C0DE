#include<bits/stdc++.h>
using namespace std;
int main()
{
 list<int> l;
 list<int> n(5,100);
 for(int i:n){
     cout<<i<<" ";
 }
  l.push_front(10);
  l.push_back(20);
  for(int i:l){
      cout<<i<<" ";
  } cout<<endl;
  l.erase(l.begin());
  cout<<"after erase:"<<endl;
  for(int i:l){
      cout<<i<<" ";
  }cout<<endl;
  cout<<"size of list:"<<l.size()<<endl;

    return 0;
}