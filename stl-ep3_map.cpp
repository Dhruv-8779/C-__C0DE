#include<bits/stdc++.h>
using namespace std;
int main()
{
   map<int,string> m; // key or value hoti hi or sorted order me 
   m[1]="abc";           // output ata hai 
   m[3]="cdc";
   m[5]="acd";
   m.insert({4,"afg"});
//   map<int,string> ::iterator it;
//   for(it=m.begin(); it != m.end(); it++){
//     cout<<(*it).first<<" "<<(*it).second<<endl;
//   }   
 for(auto &pair : m){
    cout<<pair.first<<" "<<pair.second<<endl;
 }           
    return 0;
}