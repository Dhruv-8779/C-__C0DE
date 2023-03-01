#include<bits/stdc++.h>
using namespace std;
 int linerserch(int *arr, int size, int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
 bool reMainingpart=linerserch(arr+1, size-1,key);
 return reMainingpart;
 }
int main()
{
  int arr[6]={2,4,19,39,3,10};
  int size=6;
  int key=1;
  int ans = linerserch(arr,size,key);
  if(ans){
    cout<<"key is present:"<<endl;
  }
  else{
    cout<<"key is absent:"<<endl;
  }
    return 0;
}
