#include<iostream>
using namespace std;
int main()
{
 int a,b,r,hcf;
 cout<<"Enter two number";
 cin>>a>>b;
 while(true){
      hcf=b;
   int  r=a%b;
      a=b;
      b=r;
      if(b==0){
          break;
      }       
 }
 cout<<"hcf is"<<endl<<hcf;
    return 0;
}