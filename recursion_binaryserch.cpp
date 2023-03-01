#include<bits/stdc++.h>
using namespace std;
bool isSorted(int *arr, int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1])
    return false;
    int remainnigpart = isSorted(arr+1,size-1);
    return remainnigpart;
}
int main()
{
  int arr[5]={2,4,11,10,16};
  int size=5;
  int ans = isSorted(arr,size);
  if(ans){
    cout<<"Array is sorted!"<<endl;
  }
  else{
    cout<<"Array is not Sorted!";
  }
    return 0;
}