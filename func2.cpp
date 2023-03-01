#include<bits/stdc++.h>
using namespace std;
 int fact(int n){ 
    int facto=1;
  for(int i=2; i<=n; i++){
   int facto=facto*i;
  }
    return facto;
 }
int main()
{
 int x;
 cin>>x;
 int ans=fact(x);
 cout<<ans;
    return 0;
}