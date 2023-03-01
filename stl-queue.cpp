#include<bits/stdc++.h>
using namespace std;
int main()
{
 queue<string> q;
 q.push("Ashish bhaiya");
 q.push("Shubham bhai");
 q.push("Sanu");
 cout<<"before size:"<<" "<<q.size()<<endl;
 cout<<"Top Element:"<<" "<<q.front()<<endl;
 q.pop();
 cout<<"Top Element:"<<" "<<q.front()<<endl;//o(1)
 cout<<"after size:"<<" "<<q.size()<<endl;
    return 0;
}