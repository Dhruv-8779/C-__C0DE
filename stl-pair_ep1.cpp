#include<bits/stdc++.h>
using namespace std;
int main()
{
 pair<int,string> p; //variable
//  p=make_pair(10,"dhruv"); dono optional hai jo man 
 p = {10,"dhruv"};
//  cout<<p.first<<" " <<p.second<<endl;
 pair<int,string> &p1=p;
 p1.first=5;
 cout<<p.first<<" " <<p.second<<endl;
 int a[]={1,2,3};
 int b[]={4,5,6};
 pair<int,int> p_array[3];
 p_array[0]={1,2};
 p_array[1]={3,4};
 p_array[2]={5,6};
 for(int i=0;i<3; i++){
    cout <<p_array[i].first <<" " <<p_array[i].second <<endl;
 }
    return 0;
}