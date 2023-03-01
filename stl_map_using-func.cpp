#include<bits/stdc++.h>
using namespace std;
 void print(map<int,string> &m){
  cout<<m.size()<<endl;
  for(auto &pair : m){
    cout<<pair.first<<" "<<pair.second<<endl;
 }           
 }
int main()
{
 map<int,string> m;  
   m[1]="abc";           
   m[3]="cdc"; //map me element uniqe hoti hai duplicate print nahi hoti 
   m[5]="acd";
   m.insert({4,"afg"});
   m[3]="Dhruv";
   auto it=m.find(7);
   if(it==m.end()){
    cout<<"NO VALUE";
  }  else{
     cout<<(*it).first<<" "<<(*it).second<<endl;
    }
  // print(m);
    return 0;
}