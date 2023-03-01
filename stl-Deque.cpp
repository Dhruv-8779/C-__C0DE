#include<bits/stdc++.h>
using namespace std;
int main()
{
 deque<int> d;
 d.push_front(1);
 d.push_back(5);
  for(int i:d){
  cout<<i<<" ";
  } cout<<endl;
//   d.pop_back();
//   for(int i:d){
//       cout<<i<<" ";
//   }
//    d.pop_front();
//   for(int i:d){
//       cout<<i<<" ";
//   }cout<<endl;
  cout<<"first index:"<<d.at(1)<<endl;
  cout<<"empty or not:"<<d.empty()<<endl;
  cout<<"first element:"<<d.front()<<endl;
  cout<<"last element:"<<d.back()<<endl;

//   cout<<"before erase:"<<d.size()<<endl;
//   d.erase(d.begin,d.begin()+1);
//   cout<<"afetr erase:"<<d.size()<<endl;
    return 0;
