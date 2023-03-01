#include<bits/stdc++.h>
using namespace std;
int main()
{
 unordered_map<int,string> m;
   m[1]="abc";           // output ata hai 
   m[3]="cdc";
   m[5]="acd";
   m.insert({4,"afg"});
   for(auto &pair : m){
    cout<<pair.first<<" "<<pair.second<<endl;
 }           
    return 0;
}