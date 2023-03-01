#include<bits/stdc++.h>
using namespace std;
 class calculator
 {
     private:
     int ch,a,b,ans;
     public:
     void show(){
       int a,b,ch,ans;
       cout<<"Enter user choice:";
       cin>>a>>b>>ch;
        switch (ch)
        {
     case 1:
        ans=a+b;
        cout<<"Addition "<<ans;
          break;
     case 2:
        ans=a-b;
        cout<<"subtraction "<<ans;
            break;
     case 3:
         ans=a*b;
        cout<<"Multiplication "<<ans;
         break;
     case 4:
        ans=a/b;
        cout<<"Divition "<<ans;
         break;
     case 5:
        ans=a%b;
        cout<<"Modulus "<<ans;
            break;
        
        default:
        cout<<"Invalid choice:";
            break;
        }

     }
 };
int main()
{
 calculator obj;
 obj.show();
    return 0;
}