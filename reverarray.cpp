#include<bits/stdc++.h>
using namespace std;
  void reverse( int a[], int n) {
    int start=0;
    int end=n-1;
    while(start<=end){
    int swap((a[start],a[end]));
      start++;
      end--;
    }
  }
 void printarry(int a[],int n){
     for(int i=0; i<n; i++){
         cout<<a[i]<<" ";
     }
     cout<<" ";
 }
 int main()
{
   int a[]={1,2,3,4,5,6};
   int b[]={7,8,9,10,11};
   reverse(a,6);
   reverse(b,5);
   printarry(a,6);
   printarry(b,5);
    return 0;
}