#include<bits/stdc++.h>
using namespace std;
int main()
{  // use case iska use chote array me kia jata hai ya kr skte hai
  int arr[7]={10,4,3,8,16,5,12};
  int size=7;
  for(int i=0; i<size-1; i++){
    int minIndex =i;
    for(int j=i+1; j<size; j++){
        if(arr[j]<arr[minIndex]){
           minIndex = j;
        }
        swap(arr[minIndex],arr[j]);
    }
   
  }
  for(int i=0; i<size; i++){
    cout<<arr[i]<<" ";
  }
    return 0;
}