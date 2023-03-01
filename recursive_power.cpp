#include<bits/stdc++.h>
using namespace std;
int power(int a, int b){
    if(b==0) // b is power yadi power 0 hai to  1 ayega
    return 1;
    if(b==1) // yadi power a^1 hai to a hi ayega a^b = a^1
    return a;
     // recursuve call
    int ans = power(a, b/2);
    // power even hai to
    if(b%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
    
}
int main()
{
 int a,b;
 cout<<"enter a number"<<" ";
 cin>>a>>b;
 cout<<endl;
 int ans= power(a,b);
 cout<<ans;
    return 0;
}