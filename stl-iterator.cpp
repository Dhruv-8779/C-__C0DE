#include<bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v={1,2,3,4,5};
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  vector<pair<int,int> >v_p={{1,2},{3,4},{5,6}};
  vector<pair<int,int> >:: iterator it;
  for(it=v_p.begin(); it!=v_p.end(); it++){
    cout<<(*it).first<<" "<<(*it).second<<endl;
  }
  cout<<endl;
  for(it=v_p.begin(); it!=v_p.end(); it++){
    cout<<(it->first)<<" "<<(it->second)<<endl;
  }
  //(*it).first <=> (it->first) optional
//   cout<<(*it)<<endl;
//   for(it=v.begin(); it!=v.end(); it++){
//  cout<<(*it)<<endl;
//   }
      return 0;
}