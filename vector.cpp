#include<bits/stdc++.h>
using namespace std;
int main()
{
 vector<int> v;
 cout<<"capacity"<<" "<<v.capacity()<<endl;
  v.push_back(1);
  cout<<"capacity"<<" "<<v.capacity()<<endl;
   // capacity ye btata hai ki element kitne asign huye hai 
   // size ye btata hai ki kitne element pde hai 
  v.push_back(2);
  cout<<"capacity"<<" "<<v.capacity()<<endl;

  v.push_back(3);
  cout<<"capacity"<<" "<<v.capacity()<<endl;
  cout<<"size:"<<" "<<v.size()<<endl;
  cout<<"Element 2nd index:"<<" "<<v.at(2)<<endl;
  cout<<"empty or not:"<<" "<<v.empty()<<endl;
  cout<<"first element:"<<" "<<v.front()<<endl;
  cout<<"last element:"<<" "<<v.back()<<endl;

  cout<<"brfore pop:"<<endl;
  for(int i:v){
      cout<<i<<" ";
  } cout<<endl;
   v.pop_back(); //o(1) 

   cout<<"after pop:"<<endl;
    for(int i:v){
        cout<<i<<" ";
    } cout<<endl;

    cout<<"befor clear size:"<<v.size()<<endl;
    v.clear();
    cout<<"after  clear size:"<<v.size()<<endl;
    v.clear();
    return 0;
}