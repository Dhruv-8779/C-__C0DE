#include<bits/stdc++.h>
using namespace std;
 void fib(int n){
 int t1=0;
 int t2=1;
 int nexrterm;
 for(int i=1; i<=n; i++){
 cout<<endl<<t1;
  int nextterm=t1+t2;
     t1=t2;
     t2=nextterm;
 }
return;
 }
 int main(){
 int n;
 cin>>n;
 fib(n);
    return 0;
}