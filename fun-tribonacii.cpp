#include<bits/stdc++.h>
using namespace std;
void tribonacii(int n){
    int t1=0;
    int t2=1;
     int t3=2;
    int nextTerm;
    for(int i=1; i<=n; i++){
        cout<<endl<<t1;
        nextTerm=t1+t2+t3;
        t1=t2;
        t2=t3;
        t3=nextTerm;
    }
    return ;
}
int main()
{
 int n;
 cout<<"Enter any number"<<endl;
 cin>>n;
 tribonacii(n);
    return 0;
}