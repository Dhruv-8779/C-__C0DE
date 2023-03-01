#include<bits/stdc++.h>
using namespace std;
 class AQ
 {
     int a,b,temp;
     public:
     void person(){
      cout<<"Enter two number:";
      cin>>a>>b;
       temp=a; //a=10 b=20
       a=b;
       b=temp;
       cout<<"swap number:"<<" "<<a<<" "<<b<<endl;
     } 
     public:
     void person(int a, int b){
        int c;
       c=a+b; 
       cout<<"Addition"<<" "<<c<<endl;
     }
 };
int main()
{
 AQ obj;
 obj.person();
 obj.person(100,100);
    return 1;
}