#include<iostream>
using namespace std;
int main()
{
 int a[2][2],b[2][2];
 cout<<"Enter value of first matrix";
 for(int i=0; i<2; i++)
 {
    for(int j=0; j<2;j++) {
            
    cin>>a[i][j];
    }
 }
 cout<<"Enter value of second matrix";
 for(int i=0; i<2; i++)
 {
    for(int j=0; j<2;j++) {
            
    cin>>b[i][j];
    }
 }
 cout<<" befor swaping "<<endl;
 cout<<" First matrix "<<endl;
  for(int i=0; i<2; i++)
 {
    for(int j=0; j<2;j++) {
            
    cout<<" "<< a[i][j];
    }
    cout<<endl;
 }
 cout<<"second matrix"<<endl;
for(int i=0; i<2; i++)
 {
    for(int j=0; j<2;j++) {
            
    cout<<" "<<b[i][j];
    }
    cout<<endl;
 }

    return 0;
}