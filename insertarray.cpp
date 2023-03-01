#include<iostream>
using namespace std;
int main()
{
 int a[100];
 int n;
 cout<<"Enter size of array";
 cin>>n;
 cout<<"enter array element";
 for(int i = 0; i<n; i++)
 {
  cin>>a[i];
 }
 int item;
 cout<<"insert array element in bigning position";
 cin>>item;
 n++;
 for(int i=n; i>1; i--){
     a[i-1]=a[i-2];
 }
a[0]=item;
cout<<"resultend array element";
for( int i=0;i<n; i++){
    cout<<endl<<a[i];
}
    return 0;
}