#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s; // set sorted order me print hota hai 
    s.insert(1);
    s.insert(9);
    s.insert(9);// set me 9 ya koi bhi elemnt kitne bar dalo
    s.insert(9);//wo ek hi war nikalta hai
    s.insert(2);
    s.insert(2);
    s.insert(8);
    s.insert(8);
    s.insert(8);
    s.insert(7);
    for(auto i:s){
        cout<<i<<endl;
    }cout<<endl;
     
     set<int>:: iterator it = s.begin();
     it++;
     s.erase(it);
     for(auto i:s){
         cout<<i<<endl;
     }cout<<endl;
     cout<<"5 is present or not:"<<" "<<s.count(9)<<" "<<endl;

    //  set<int>:: iterator itr = s.find(2);
    //  for(auto it=itr;it!=s.end(); it++){
    //      cout<<it<<endl;
    //  }
    return 0;
}