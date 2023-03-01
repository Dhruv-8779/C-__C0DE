#include<bits/stdc++.h>
#include<queue>
using namespace std;
void show(queue<int> Que){
    queue<int> q = Que;
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}
int main()
{
  queue<int> q;
  q.push(10);
  q.push(1);
  q.push(22);
  q.push(68);
   show(q);
   cout<<"size :"<<q.size()<<endl;
  cout<<"front element :"<<q.front()<<endl;
  cout<<"back eleemnt :"<<q.back()<<endl;
   q.pop();
    show(q);
    return 0;
}