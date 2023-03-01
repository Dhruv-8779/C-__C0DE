#include<bits/stdc++.h>
using namespace std;
int findDuplicate(int arr[],int size){
   int ans = 0;
   for(int i=0; i<size; i++){ // ans^ xor operation
    ans=ans^arr[i];            // 1*1=0 , 2*2=0 ,0*2=2
   }
   for(int i=1; i<size; i++){
    ans=ans^i;
   }
    
 cout<<" find duplicate array :"<<" "<<ans;
 return ans;
}
int main()
{
 int arr[8]={1,2,3,4,5,6,7,2};
  findDuplicate(arr,10);
    return 0;
}