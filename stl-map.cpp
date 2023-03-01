#include<bits/stdc++.h>
using namespace std;
int main()
{
 map<int,string> m;
 m[1]="Dhruv";
 m[10]="Kumar";
 m[15]=" Soni";
 m.insert( { 5,"bheem"});
 for(auto i:m){
     cout<<i.first<<" "<<i.second<<" ";
 }cout<<endl;
 cout<<"finding value 15:"<<" "<<m.count(15)<<" ";
    return 0;
}