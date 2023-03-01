#include<bits/stdc++.h>
using namespace std;
bool palindrome(string &str, int s, int e ){
   if(s>e) //base case
   return true;
   if(str[s]!=str[e])
   return false;
   else{
       palindrome(str,s+1,e-1); //recursive call
   }
 }
int main()
{
  string name = "noon";
  cout<<endl;
 bool ispalindrom = palindrome(name,0,name.size()-1);
  if(ispalindrom){
    cout<<"its palindrome";
  }
  else{
    cout<<"its not a palindrome";
  }
    return 0;
}