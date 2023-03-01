#include<bits/stdc++.h>
using namespace std;
 void printstrvec(vector<string> s){
     cout<<"size:"<<" "<<s.size()<<endl;
     for(int i=0; i<s.size(); i++){
         cout<<s[i]<<" ";
     }
     cout<<endl;
 }
int main()
{
 vector<string> s;
  s.push_back("Dhruv");
  s.push_back("Soni");
 //copy
 vector<string> s2=s;
 s2.push_back("Shubham");
 printstrvec(s);
 printstrvec(s2);

    return 0;
}