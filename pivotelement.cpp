#include<bits/stdc++.h>
using namespace std;
  int pivot(int arr[], int n){ //Binarysearch se;
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2; // mid=(s+e)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
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
 int odd[7]={7,9,10,11,1,2,3};
 cout<<"pivot element index at:"<<pivot(odd,8);
        //pivot element means sbse choti value;
    return 0;
}