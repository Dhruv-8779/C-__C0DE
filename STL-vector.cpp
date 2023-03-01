#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int> v){
     cout<<"size:"<<v.size()<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
 }
int main()
{          //size 10
 vector<int> v(10,5);// vector dynamic nature ka hota hai 
                     //use kabhi bhi ghata ya badha skte hai
 v.push_back(7);
 v.push_back(6);
 printvec(v);
 v.pop_back();
 printvec(v);

    return 0;
}