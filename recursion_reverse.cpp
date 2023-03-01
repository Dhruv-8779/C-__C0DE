#include<bits/stdc++.h>
using namespace std;
void reverse(string& str, int s, int e ){
   if(s>e) //base case
   return ;
   swap(str[s],str[e]);
   s++;
   e--;
   reverse(str,s,e); //recursive call
}
int main()
{
  string name = "india is beggest country";
  reverse(name,0,name.size()-1);
  cout<<name;

    return 0;
}