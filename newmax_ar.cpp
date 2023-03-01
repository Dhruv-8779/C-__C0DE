#include<bits/stdc++.h>
#include<climits>
using namespace std;
int main()
{
 int n;
 cout<<"Enter arry of size";
 cin>>n;
 int a[n];
 for(int i=0; i<n; i++){
     cin>>a[i];
 }
 int maxNo=INT16_MIN;// new bilten function//
 int minNo=INT16_MAX;// new bilten function//
 for(int i=0; i<n; i++){
     if(a[i]>maxNo){
         maxNo=a[i];
     }
     if(a[i]<minNo){
         minNo=a[i];
     }
 }
 cout<<maxNo<<" "<<minNo;
    return 0;
}