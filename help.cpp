
#include<bits/stdc++.h>
using namespace std;
int main()
{
// string a="abc",b="hjk";
//    char temp= b[0];
//    b[0]=a[0];
//    a[0]=temp;
// swap(a[0],b[0]);
//    cout<<a<<" "<<b;

int arr[]={3,0,9,4,2,0,2};
int n = sizeof(arr) / sizeof(arr[0]);
   sort(arr,arr+n);
   for(int i=0;i<n;i++){
       cout<<arr[i];
   }
    return 0;
}