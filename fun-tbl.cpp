#include<bits/stdc++.h>
using namespace std;
int table(int n){
  int s;
    for(int i=1; i<=10; i++){
        s=n*i;
    cout<<s<<endl;
    }
    return s;
}
int main()
{
 int n;
 cout<<"Enter any tbale";
 cin>>n;
 cout<<table(n);
    return 0;
}