#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,b;
 cout<<"Enter power of numebr:";
 cin>>a>>b;
 int ans=1;
 for(int i=1; i<=b; i++){
  ans=ans*a;
 }
 cout<<ans<<endl;
    return 0;
}