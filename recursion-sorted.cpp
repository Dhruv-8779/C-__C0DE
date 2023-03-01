#include<bits/stdc++.h>
using namespace std;
 bool isSorted(int arr[], int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    bool remainingsorted = isSorted(arr+1,size-1);
    return remainingsorted;
 }
int main()
{
 int arr[5]={1,4,5,6,5};
 int size=5;
 bool ans=isSorted(arr,size);
 if(ans){
    cout<<"Array is sorted :"<<endl;
 }
  else{
    cout<<"Array is not sorted :"<<endl;
  }
    return 0;
}
