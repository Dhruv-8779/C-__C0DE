#include<bits/stdc++.h>
using namespace std;
int sum(int n){
  int ans=0;
  for(int i=1; i<=n; i++)
   ans=ans+i;
   return ans;
}
int main()
{
 int n;
 cin>>n;
 cout<<"sum of natural:"<<sum(n)<<endl;
    return 0;
}