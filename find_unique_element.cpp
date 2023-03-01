#include<bits/stdc++.h>
using namespace std;
 int findUnique(int arr[], int size){
    int ans=0;
    for(int i=0; i<size; i++){
      ans=ans^arr[i];
    }
    cout<<"find unique element in a arry:"<<" "<<ans;
    return ans;
 }
int main()
{
 int arr[7]={2,1,3,6,2,3,6};
 findUnique(arr,7);
    return 0;
}