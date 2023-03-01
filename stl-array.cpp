#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3]={1,2,3}; // normol array
    array<int,5> a={1,2,3,4,5}; //stl array
    int size=a.size();
     cout<<"size:"<<a.size()<<" "<<endl;
    for(int i=0; i<size; i++){
        cout<<a[i]<<endl;
    }   // stl function
    cout<<"Element at 2nd index:"<<" "<<a.at(2)<<endl;
    cout<<"element impty or not:"<<" "<<a.empty()<<endl;
     cout<<"First elemnt:"<<" "<<a.front()<<endl;
     cout<<"Last elemnt:"<<" "<<a.back()<<endl;
    return 0;
}