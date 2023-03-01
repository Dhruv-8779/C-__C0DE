#include<iostream>
using namespace std;
int main()
{ 
   char ch;
   cout<<"Enter any character";
   cin>>ch;
   if(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
   {
       cout<<" vowel";
   } 
   else{
       cout<<"consonet";
   }

    return 0;
}