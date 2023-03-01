#include<iostream>
using namespace std;
int main()
{
 int a[10]={34,56,54,32,67,89,90,32,31};
  cout<<"aray element"<<endl;
 for(int i=0; i<10; i++){
     
     cout<<a[i]<<endl;
 }
  cout<<"reverse aray element"<<endl;
 for(int i=10; i>=0;i--){
     cout<<a[i]<<endl;
 }
    return 0;
}