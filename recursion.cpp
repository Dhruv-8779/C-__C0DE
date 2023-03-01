#include<bits/stdc++.h>
using namespace std;
int fact(int n){
   if(n==0){
       return 1;
   }
    int factnum1=fact(n-1);
    int factN=fact(n-1)*n;
    return factN;
}
int main()
{
 cout<<"factorial"<<endl<<fact(5);
    return 0;
}