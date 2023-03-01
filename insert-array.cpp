#include<iostream>
using namespace std;
int main()
{
int a[100],n,i,item;
cout<<"enter size of array";
cin>>n;
cout<<"enter array element";
for(i=0;i<n;i++){
  cin>>a[i]; 
}
cout<<"insert element in array at begning";
cin>>item;
n++;
for (i=n;i>1;i--)
{
    a[i-1]=a[a-2];
}

    return 0;
}