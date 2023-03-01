#include<bits/stdc++.h>
using namespace std;
void sortArray(int *arr,int n){
    if(n==0 || n==1){ // base case
        return ;
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sortArray(arr,n-1); // recursive call
}
int main()
{
  int arr[10]={10,9,8,7,6,1,4,3,2,1};
  int n = 10;
  sortArray(arr,n);
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
    return 0;
}