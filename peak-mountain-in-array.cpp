#include<bits/stdc++.h>
using namespace std;
 int peakmountain(int arr[],int n){
     int s=0;
     int e=n-1;
     int mid=s+(e-s)/2;
     while(s<e){
         if(arr[mid]<arr[mid+1]){
             s=mid+1;
         }
         else{
             e=mid;
         }
         mid=s+(e-s)/2;
     }
     return s;
 }
int main()
{
  int odd[8]={3,4,5,10,50,56,78,1};
  cout<<"peak element at index:"<<peakmountain(odd,8);
          // peak element means sabse badi value:
    return 0;
}
