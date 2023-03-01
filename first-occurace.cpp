#include<bits/stdc++.h>
using namespace std;
 int firstocurance(int arr[],int n, int key){
     int s=0;
     int e=n-1;
     int mid=s+ (e-s)/2;
     int ans=-1;
     while(s<=e){
         if(arr[mid]== key){
         ans=mid;
         e=mid-1; //first occurance me jana hai to left ko piche krna;
        }
        else if(key>arr[mid]) { // right me jao
         s=mid+1;
        }
        else if(key<arr[mid])
        { // left me jao
            e=mid-1;
        }
        mid=s+ (e-s)/2;
     }
      return ans;
 }
int main()
{
  int even[6]={2,6,7,9,9,20};
  cout<<"first occurance of 9 is index at:"<<firstocurance(even,6,9);
    return 0;                                              //size 6 key=9
}