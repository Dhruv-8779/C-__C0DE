#include<bits/stdc++.h>
using namespace std;
int countEven(int a[], int n){
   int count=0;
  for(int i=1; i<n; i++){
      if(a[i]%2==0){
          count++;
      }
  }
   return count++;
}
int main()
{
 int a[]={1,2,3,4,5,6,7,8,9,10,11};
 int n=11;
 cout<<endl<<countEven(a,n);
    return 0;
}