#include<bits/stdc++.h>
using namespace std;
int main()
{
 char s[20],ch;
 int l;
 cout<<"Enter a string";
 cin>>s;
 for(int l=0; s[l]; l++);
 for(int i=0; i<l/2; i++){
    ch=s[i];
    s[i]=s[l-1-i];
    s[l-1-i]=ch;
 }
 cout<<"Reverse string:"<<s<<endl;
  
    return 0;
}