#include<bits/stdc++.h>
using namespace std;
 int lastocuurane(int arr[],int n, int key){
     int s=0;
     int e=n-1;
     int mid=s+(e-s)/2;
     int ans=0;
     while(s<=e){
         if(arr[mid]==key){// last occurance
             ans=mid;
             s=mid+1;
         }
         else if(key>arr[mid]){
             s=mid+1;
         }
         else if(key<arr[mid]){
         e=mid-1;
         }
         mid=s+(e-s)/2;
     }
     return ans;
 }
int main()
{
  int odd[5]{3,5,6,8,10};
  cout<<"last occurance 10 is at index:"<<lastocuurane(odd,5,10);
    return 0;
}