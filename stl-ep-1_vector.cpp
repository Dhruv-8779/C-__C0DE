#include<bits/stdc++.h>
using namespace std;
 void printvec(vector<string>v){
    cout<<"size :"<<v.size()<<endl;
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
 }
int main()
{
 vector<string>v;
  int n;
  cin>>n;
  for(int i=0; i<n; i++){
    string s;
    cin>>s;
    v.push_back(s);
  }
  printvec(v);
//  v.push_back(10);
//  v.push_back(20);
//  printvec(v);
//  v.pop_back();
//  printvec(v); //O(1)

    return 0;
}