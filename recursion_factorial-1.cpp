#include<bits/stdc++.h>
using namespace std;
 int fact(int n){
    if(n==0){
        return true; // base case rukna kb hai
    }
    int small=fact(n-1);
    int big=n*small;
    return big;
 }
int main()
{
 int n;
 cin>>n;
 int ans=fact(n);
 cout<<ans<<endl;
    return 0;
}