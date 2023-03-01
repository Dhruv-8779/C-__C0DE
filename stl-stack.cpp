#include<bits/stdc++.h>
using namespace std;
int main()
{
 stack<string> s;
 s.push("Dhruv");
 s.push("Kumar");
 s.push("soni");
 cout<<"Top elemnt:"<<" "<<s.top()<<endl;
 s.pop();
 cout<<"Top element:"<<" "<<s.top()<<endl;
 cout<<"size:"<<" "<<s.size()<<endl;
 cout<<"empty or not"<<" "<<s.empty()<<endl;
 
    return 0;
}