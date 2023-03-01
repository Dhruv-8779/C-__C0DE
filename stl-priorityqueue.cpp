#include<bits/stdc++.h>
using namespace std;
int main()
{
    //max-heap
 priority_queue<int> maxi;
 // min-heap
 priority_queue<int,vector<int> , greater<int> > mini;
 maxi.push(3);
 maxi.push(6);
 maxi.push(8);
 maxi.push(14);
 maxi.push(20);
 cout<<"size:"<<" "<<maxi.size()<<endl;
 int n= maxi.size();
 for(int i=0; i<n; i++){
     cout<<maxi.top()<<" "<<endl;
     maxi.pop();
 }cout<<endl;
  mini.push(4);
  mini.push(1);
  mini.push(6);
  mini.push(7);
  mini.push(2);
  int m=mini.size();
  for(int i=0; i<m; i++){
    cout<<mini.top()<<" "<<endl;
    mini.pop();
  }cout<<endl;
  cout<<"khali hai kya bhai:"<<mini.empty()<<endl;
    return 0;
}