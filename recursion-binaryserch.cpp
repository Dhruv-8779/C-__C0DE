#include<bits/stdc++.h>
using namespace std;
 void print(int arr[],int s, int e){
    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
 }
 int binarySerch(int arr[], int s, int e, int key){
     print(arr,s,e);
    if(s>e){ //base case matlb rukna kab hai
        return false;
    }
    int mid = s+(e-s)/2;
    if(arr[mid]==key){
        return true;
    }
    if(arr[mid]<key){
      return binarySerch(arr,mid+1,e,key);
    }
    else{
     return binarySerch(arr,s,mid-1,key);
    }
 }
int main()
{
  int arr[6]={1,3,5,10,23,50};
  int size=6;
  int key=23;
 cout<<"present:" << binarySerch(arr,0,5,23);
    return 0;
}