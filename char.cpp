#include<bits/stdc++.h>
using namespace std;
 int gatelength(char name[]){
    int  count=0;
   for(int i=0; name[i] !='\0'; i++){
    count++;
   }
   return count;
 }
int main()
{
 char name[10];
 cout<<"Enter your name is ";
 cin>>name;
 cout<<name<<endl;
 cout<<"length"<<endl<<gatelength(name)<<endl;
    return 0;
}