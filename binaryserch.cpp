#include<bits/stdc++.h>
using namespace std;
int binaryserch(int a[], int size, int key){
    int s=0;
    int e=size-1;
    while (s<=e)
    {
       int mid=(s+e)/2; 
       if(a[mid]==key){
           return mid;
       }
       else if(a[mid]>key){
       e=mid-1;
       }
       else{
           s=mid+1;
       }
    }
    return -1;
}
int main()
{
 int size;
 cout<<"enter size of array";
 cin>>size;
 int a[size];
 for(int i=0; i<size; i++){
     cin>>a[i];
 }
 int key;
 cin>>key;
 cout<<binaryserch(a,size,key)<<endl;
    return 0;
}