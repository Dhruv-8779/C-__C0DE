#include<bits/stdc++.h>
using namespace std;
int main()
{
    //syntax
   pair<int,string> p;  // p variable
        //data types koi bhi data type
//    p= make_pair(10,"Dhruv");
    p={20,"Soni"}; // 2 type declare k tarika
                   // internal function : value store karane k tarika 
       pair<int,string> &p1=p;
       p1.first=3;              
   cout<<p.first<<" "<<p.second<<endl;
   int a[]= {1,2,3};
   int b[]= {4,5,6};
   pair<int,int> p_array[3];
   p_array[0]={1,2};
   p_array[1]={2,3};
   p_array[2]={3,4};
   swap(p_array[0], p_array[2]);
   for(int i=0; i<3; i++){
       cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
   }
    return 0;
}