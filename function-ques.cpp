#include<bits/stdc++.h>
using namespace std;
 int AP(int n, int a, int d){
   int ans=a*n+d;
   return ans;
 }
int main()
{
 int n,a,d;
 cin>>n>>a>>d;
 cout<<"arithmetic progression:"<<" "<<AP(n,a,d);
 
    return 0;
}