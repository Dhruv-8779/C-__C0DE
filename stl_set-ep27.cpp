#include<bits/stdc++.h>
using namespace std;
 void print(set<string> s){
    cout<<"size:"<<s.size()<<endl;
 for(string value: s){
    cout<<value<<endl;
  }
//   for(auto it=s.begin(); it!=s.end(); it++){
//  cout<<(*it)<<endl;
//   }
 }
int main()
{
   set<string> s;
   s.insert("abc");
   s.insert("zsd");
   s.insert("ghd");
//    s.insert("ghd");
//    auto it=s.find("abcd");
//    if(it !=s.end()){
//     cout<<(*it);
//    }
//  s.erase("abc");
   print(s);
    return 0;
}