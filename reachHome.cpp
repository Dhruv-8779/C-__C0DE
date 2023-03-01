#include<bits/stdc++.h>
using namespace std;
void  reachHome(int src, int desti){
    cout<<"source "<<src<<" destination "<<desti<<endl;
    //base case
    if(src==desti){
        cout<<"pahuch gye hum !"<<endl;
        return ;
    }
    // 1 step bada do
      src++; //processing
    reachHome(src,desti); // recursive call
}
int main()
{
  int src=1;
  int desti=10;
  cout<<endl;
  reachHome(src,desti);
    return 0;
}